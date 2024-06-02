cmake_minimum_required(VERSION 3.27)
project(test_c C)

set(CMAKE_C_STANDARD 11)

add_executable(test_c main.c
        array_test.c
        array_test.h
        fopen_test.c
        fopen_test.h)
