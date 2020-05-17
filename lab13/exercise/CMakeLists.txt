cmake_minimum_required(VERSION 3.16.6)
project(lab13_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}
        ./CStereoShape_lab13_01.cpp
        #./lab13_01.cpp
        #./lab13_02.cpp
        ./lab13_04.cpp
        ./CCube_lab13_02.cpp
        ./CSphere_lab13_03.cpp
        )
