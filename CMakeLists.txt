cmake_minimum_required(VERSION 2.8.11)
project(fakekey)

set(SOURCE_FILES main.cc KeyboardInjector.cc)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -std=c++11")
include_directories("/usr/include/libevdev-1.0")

add_executable(fakekey ${SOURCE_FILES})

target_link_libraries (fakekey evdev)