cmake_minimum_required(VERSION 3.6)
project(Ex4_Calendario)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Date.h Date.cpp)
add_executable(Ex4_Calendario ${SOURCE_FILES})