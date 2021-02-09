add_library(${PROJECT_NAME}_CandyBar
        SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/CandyBar.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/CandyBar.h)
add_library(${PROJECT_NAME}_Rectangle
        SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/Rectangle.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Rectangle.h)

target_include_directories(${PROJECT_NAME}_CandyBar
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME}_Rectangle
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})