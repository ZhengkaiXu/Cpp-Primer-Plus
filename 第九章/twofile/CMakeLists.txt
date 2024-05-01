cmake_minimum_required(VERSION 3.28)
project(twofile)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)
add_executable(twofile twofile1.cpp twofile2 twofile2.cpp)
