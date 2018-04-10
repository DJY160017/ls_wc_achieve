cmake_minimum_required(VERSION 3.9)
project(cmd C)

set(CMAKE_C_STANDARD 99)

add_executable(cmd main.c common.h ls.h wc.h my_ls.c my_wc.c common.c)