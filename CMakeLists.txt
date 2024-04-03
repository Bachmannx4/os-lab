cmake_minimum_required(VERSION 3.27)
project(os_lab C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(os_lab
        hellofunc.c
        hellomake.c
        hellomake.h)
