cmake_minimum_required(VERSION 3.5)
project(xel_win32_golang)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/xel/xel.h src/xel/win32/xel-win32.h src/xel/win32/xel-win32.cpp src/xel/xel-core.cpp src/xel/xel-window.cpp src/xel/xel-window.h src/xel/win32/xel-win32-handle-messages.cpp src/xel/win32/xel-win32-handle-messages.h src/xel/xel-keyboard.cpp src/xel/xel-keyboard.h src/xel/win32/xel-win32-keyboard-util.cpp src/xel/xel-keyboard-codes.h src/xel/xel-mouse.h src/xel/xel-mouse.cpp src/xel/xel-enums.h)
add_executable(xel_win32_golang ${SOURCE_FILES})