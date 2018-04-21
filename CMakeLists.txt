cmake_minimum_required(VERSION 3.9)
project(dynamicweather)

set(CMAKE_CXX_STANDARD 17)
set(CURLPPINCL ./lib/curlpp/include)

include_directories(${CURLPPINCL})

add_executable(dynamicweather main.cpp consts.cpp)
target_link_libraries(dynamicweather curlpp)