cmake_minimum_required(VERSION 3.24)
project(Pointers_Inheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(Pointers_Inheritance main.cpp Shape.cpp Shape.h Circle.h Rectangle.h Circle.cpp Rectangle.cpp Triangle.h Triangle.cpp)
