# header begin
cmake_minimum_required(VERSION 3.10.2)
project(CS205_C_CPP LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/cross_platform.cmake)
include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/parallel.cmake)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/include)
#include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/third_party)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/include.cmake)

set(exerciseList 01 02 03 04 05 06 07 08 09 11 12 13 14 15)
Add_Sub_Dir_List(exerciseList lab /exercise)
unset(exerciseList)

set(examplesList 06 07 08 11 12 13)
Add_Sub_Dir_List(examplesList lab /examples)
unset(examplesList)

set(AssignmentList 1 2 3 4 5)
Add_Sub_Dir_List(AssignmentList Assignment_ "")
unset(AssignmentList)

add_subdirectory(midterm)

if(USE_OPENCV)
    find_package(OpenCV REQUIRED)
endif()
if (OpenCV_FOUND)
    add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/lab10/examples)
    MESSAGE(STATUS "lab10 using libopencv-dev")
endif ()
enable_testing()
#add_subdirectory(CS205_project_2020S)
add_subdirectory(2020fall)
