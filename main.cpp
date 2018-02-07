#include <iostream>
#include "consts.h"
//#include <boost/asio.hpp>

int main() {

  consts c;

  std::string string1 = "kekek";
  std::string string2 = "kukuk";
  std::string combined = string1 + string2;

  std::cout << combined << std::endl;
  return 0;
}