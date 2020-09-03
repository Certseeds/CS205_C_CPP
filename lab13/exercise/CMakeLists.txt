cmake_minimum_required(VERSION 3.16.6)
project(lab13_exercise LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_library(lab13_CStereoShape
        SHARED
        CStereoShape_lab13_01.h
        CStereoShape_lab13_01.cpp)

add_library(lab13_CCube
        SHARED
        CCube_lab13_02.h
        CCube_lab13_02.cpp)

add_library(lab13_CSphere
        SHARED
        CSphere_lab13_03.h
        CSphere_lab13_03.cpp)

add_executable(${PROJECT_NAME} ./lab13_04.cpp)
target_link_libraries(${PROJECT_NAME}
        lab13_CStereoShape
        lab13_CCube
        lab13_CSphere)