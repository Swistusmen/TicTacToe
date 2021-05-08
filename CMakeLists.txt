cmake_minimum_required(VERSION 3.16.3)

project(Tic VERSION 1.0)

set(CMAKE_CXX_COMPILER "/usr/bin/g++-9")
set(CMAKE_C_COMPILER "/usr/bin/gcc")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(src)

