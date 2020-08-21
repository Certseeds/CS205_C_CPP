cmake_minimum_required(VERSION 3.10)
project(lab04_exercise)
set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}_test test_lab04.cpp)
add_executable(${PROJECT_NAME}_01 lab04_01.cpp)
add_executable(${PROJECT_NAME}_02 lab04_02.cpp)
add_executable(${PROJECT_NAME}_03 lab04_03.cpp)

# target_link_libraries(lab04)