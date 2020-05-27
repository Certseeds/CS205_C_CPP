cmake_minimum_required(VERSION 3.6)
project(lab12_example)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}_example0
        ./useComplex0.cpp ./Complex0.cpp ./Complex0.h
        )
add_executable(${PROJECT_NAME}_example1
        ./useComplex1.cpp ./Complex1.cpp ./Complex1.h
        )
add_executable(${PROJECT_NAME}_example2
        ./useComplex2.cpp ./Complex2.cpp ./Complex2.h
        )
add_executable(${PROJECT_NAME}_example3
        ./useComplex3.cpp ./Complex3.cpp ./Complex3.h
        )
add_executable(${PROJECT_NAME}_example4
        ./useComplex4.cpp ./Complex4.cpp ./Complex4.h
        )
