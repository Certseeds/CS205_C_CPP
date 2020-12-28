# header begin
cmake_minimum_required(VERSION 3.10.2)
project(CS205_C_CPP LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

include_directories(./third_party)
include_directories(./include)
# header end
# add library begin
#add_library(catch STATIC catch.hpp )
#SET_TARGET_PROPERTIES(catch PROPERTIES LINKER_LANGUAGE CXX)

function(Add_Sub_Dir_List _List PrePath PostPath)
    foreach (element IN LISTS ${_List})
        add_subdirectory(${PrePath}${element}${PostPath})
    endforeach ()
endfunction()

set(exerciseList 01 02 03 04 05 06 07 08 09 11 12 13 14 15)
Add_Sub_Dir_List(exerciseList lab /exercise)
unset(exerciseList)

set(examplesList 06 07 08 12 13)
Add_Sub_Dir_List(examplesList lab /examples)
unset(examplesList)

set(AssignmentList 1 2 3 4 5)
Add_Sub_Dir_List(AssignmentList Assignment_ /src)
unset(AssignmentList)

add_subdirectory(midterm)
#add_subdirectory(CS205_project_2020S)
