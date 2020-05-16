cmake_minimum_required(VERSION 3.6)
project(example)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(example0
        code_example/useComplex0.cpp code_example/Complex0.cpp code_example/Complex0.h
        )
add_executable(example1
        code_example/useComplex1.cpp code_example/Complex1.cpp code_example/Complex1.h
        )
add_executable(example2
        code_example/useComplex2.cpp code_example/Complex2.cpp code_example/Complex2.h
        )
add_executable(example3
        code_example/useComplex3.cpp code_example/Complex3.cpp code_example/Complex3.h
        )
add_executable(example4
        code_example/useComplex4.cpp code_example/Complex4.cpp code_example/Complex4.h
        )
