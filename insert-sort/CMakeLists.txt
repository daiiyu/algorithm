cmake_minimum_required(VERSION 3.6)
project(insert_sort)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -O0)
set(SOURCE_FILES main.cpp InsertSort.h)
add_executable(insert_sort ${SOURCE_FILES})

