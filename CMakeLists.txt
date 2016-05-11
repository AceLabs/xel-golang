cmake_minimum_required(VERSION 3.5)
project(xel_win32_golang)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp)
add_executable(xel_win32_golang ${SOURCE_FILES})