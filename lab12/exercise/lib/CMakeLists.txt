add_library(${PROJECT_NAME}_Complex
        SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/Complex.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Complex.h)
add_library(${PROJECT_NAME}_Number
        SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/Number.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Number.h)

target_include_directories(${PROJECT_NAME}_Complex
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME}_Number
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})