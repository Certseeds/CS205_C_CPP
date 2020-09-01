cmake_minimum_required(VERSION 3.10.2)
project(Assignment_1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

# add_executable(${PROJECT_NAME}  test_assignment_1.cpp)
add_executable(${PROJECT_NAME} assignment_1.cpp)
add_executable(${PROJECT_NAME}_test test_assignment_1.cpp)
# target_link_libraries(Assignment_1)
