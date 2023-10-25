cmake_minimum_required(VERSION 3.26)
project(labstruct)

set(CMAKE_CXX_STANDARD 17)

add_executable(labstruct main.cpp
        AlgComplex.cpp
        AlgComplex.h
        TrigComplex.cpp
        TrigComplex.h)
