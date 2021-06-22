cmake_minimum_required(VERSION 3.12)
project(${PROJECT_NAME}_lab13_example)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME}_main1 ${CMAKE_CURRENT_SOURCE_DIR}/code1/main1.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code1/Circle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code1/Circle.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code1/Rectangle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code1/Rectangle.h)
add_executable(${PROJECT_NAME}_main2
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/main2.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/Circle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/Circle.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/Rectangle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/Rectangle.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/Shape.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code2/Shape.h)
add_executable(${PROJECT_NAME}_main3 ${CMAKE_CURRENT_SOURCE_DIR}/code3/main3.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/Circle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/Circle.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/Rectangle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/Rectangle.h
        ${CMAKE_CURRENT_SOURCE_DIR}/code3/Shape.cpp)