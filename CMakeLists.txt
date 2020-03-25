# header begin
cmake_minimum_required(VERSION 3.10.2)
project(CS205_C_CPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
# header end
# add library begin
#add_library(catch STATIC catch.hpp )
#SET_TARGET_PROPERTIES(catch PROPERTIES LINKER_LANGUAGE CXX)

add_subdirectory(lab01/src)
add_subdirectory(lab02/src)
add_subdirectory(lab03/src)
add_subdirectory(lab04/src)
add_subdirectory(lab05/src)
add_subdirectory(Assignment_1/src)
add_subdirectory(Assignment_2/src)
