cmake_minimum_required(VERSION 3.5)
project(xel_win32_golang)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp )

set(SOURCE_FILES_XEL_H src/xel/xel.h src/xel/xel-window.h src/xel/xel-enums.h)
set(SOURCE_FILES_XEL_CPP src/xel/xel-core.cpp src/xel/xel-window.cpp)

set(SOURCE_FILES_XEL_INPUT_H src/xel/xel-keyboard.h src/xel/xel-keyboard-codes.h src/xel/xel-mouse.h)
set(SOURCE_FILES_XEL_INPUT_CPP src/xel/xel-keyboard.cpp src/xel/xel-mouse.cpp src/xel/xel-keyboard-codes.cpp)

set(SOURCE_FILES_XEL_WIN32_H src/xel/win32/xel-win32.h src/xel/win32/xel-win32-handle-messages.h)
set(SOURCE_FILES_XEL_WIN32_CPP src/xel/win32/xel-win32.cpp src/xel/win32/xel-win32-handle-messages.cpp src/xel/win32/xel-win32-keyboard-util.cpp src/xel/xel-enums.cpp)

add_executable(xel_win32_golang ${SOURCE_FILES} ${SOURCE_FILES_XEL_H} ${SOURCE_FILES_XEL_CPP} ${SOURCE_FILES_XEL_INPUT_H} ${SOURCE_FILES_XEL_INPUT_CPP} ${SOURCE_FILES_XEL_WIN32_H} ${SOURCE_FILES_XEL_WIN32_CPP})