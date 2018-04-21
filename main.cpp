#include <WinSock2.h>
#include <iostream>

int main(int argc, char *argv[]) {

    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cout << "WSAStartup failed.\n";
        system("pause");
        return 1;
    }
    SOCKET Socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    struct hostent *host;
    host = gethostbyname("www.giallozafferano.it");
    SOCKADDR_IN SockAddr;
    SockAddr.sin_port = htons(80);
    SockAddr.sin_family = AF_INET;
    SockAddr.sin_addr.s_addr = *((unsigned long*)host->h_addr);
    std::cout << "Connecting...\n";
    if (connect(Socket, (SOCKADDR*)(&SockAddr), sizeof(SockAddr)) != 0) {
        std::cout << "Could not connect";
        system("pause");
        return 1;
    }
    std::cout << "Connected.\n";
    //GET /ricerca-ricette/pasta/
    send(Socket, "GET / HTTP/1.1\r\nHost: www.giallozafferano.it/ricerca-ricette/pasta/\r\nConnection: close\r\n\r\n", strlen("GET / HTTP/1.1\r\nHost: www.giallozafferano.it/ricerca-ricette/pasta/\r\nConnection: close\r\n\r\n"), 0);
    char buffer[10000];
    int nDataLength;
    while ((nDataLength = recv(Socket, buffer, 10000, 0)) > 0) {
        int i = 0;
        while (buffer[i] >= 32 || buffer[i] == '\n' || buffer[i] == '\r') {
            i += 1;
        }
    }

    std::string page(buffer);
    page = page.erase(page.size()-1);

    std::cout << std::endl << page << std::endl;

    size_t found = page.find("<Risultati Ricerca");
    if (found != std::string::npos) {
        std::cout << "risultati found at position: " << found << '\n';
    }

    closesocket(Socket);
    WSACleanup();
    system("pause");
    return 0;
}