cmake_minimum_required(VERSION 3.12)
project(lab13_code_example)

set(CMAKE_CXX_STANDARD 14)
add_executable(main1 ./code1/main1.cpp
        ./code1/Circle.cpp
        ./code1/Circle.h
        ./code1/Rectangle.cpp
        ./code1/Rectangle.h )
add_executable(main2 ./code2/main2.cpp
        ./code2/Circle.cpp
        ./code2/Circle.h
        ./code2/Rectangle.cpp
        ./code2/Rectangle.h
        ./code2/Shape.cpp
        ./code2/Shape.h)

add_executable(main3 ./code3/main3.cpp
        ./code3/Circle.cpp
        ./code3/Circle.h
        ./code3/Rectangle.cpp
        ./code3/Rectangle.h
        ./code3/Shape.cpp)