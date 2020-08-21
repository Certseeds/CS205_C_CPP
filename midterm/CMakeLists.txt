cmake_minimum_required(VERSION 3.16.6)
project(Midterm LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

add_executable(${PROJECT_NAME}_01
        ./question1.cpp)

add_executable(${PROJECT_NAME}_02
        ./question2.cpp)

# more details directly look at Project,not there

add_executable(${PROJECT_NAME}_04
        ./question4.cpp)