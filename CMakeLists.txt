cmake_minimum_required(VERSION 3.7)
project(1000_algorithms)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        algo/0001-binary-search/bst.c
        LICENSE
        README.md)

add_executable(1000_algorithms ${SOURCE_FILES})