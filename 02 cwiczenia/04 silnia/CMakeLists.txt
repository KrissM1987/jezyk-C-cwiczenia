cmake_minimum_required(VERSION 2.8.4)
project(silnia)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.c)

add_executable(silnia ${SOURCE_FILES})