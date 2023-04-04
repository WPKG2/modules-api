cmake_minimum_required(VERSION 3.24)
project(example_module C)

set(CMAKE_C_STANDARD 11)

include_directories(../include)

add_library(example_module SHARED module.c)
