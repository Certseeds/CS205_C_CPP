cmake_minimum_required(VERSION 3.16.6)
project(lab11_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable(${PROJECT_NAME}
        #./CandyBar.cpp  ./lab11_01.cpp
        ./Rectangle.cpp ./lab11_02.cpp
        )
