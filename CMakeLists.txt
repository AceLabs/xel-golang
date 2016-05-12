cmake_minimum_required(VERSION 3.5)
project(xel_win32_golang)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/xel.h src/win32/xel-win32.h src/win32/xel-win32.cpp src/xel-core.cpp src/xel-window.cpp src/xel-window.h src/win32/xel-win32-handle-messages.cpp src/win32/xel-win32-handle-messages.h)
add_executable(xel_win32_golang ${SOURCE_FILES})