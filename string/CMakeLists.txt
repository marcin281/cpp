cmake_minimum_required(VERSION 4.2)
project(string)

set(CMAKE_CXX_STANDARD 20)

add_executable(string main.cpp
        string_utils.cpp
        string_utils.hpp)
