add_library(${PROJECT_NAME}_CandyBar
        ${LIB_WAY}
        ${CMAKE_CURRENT_SOURCE_DIR}/candy_bar.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/candy_bar.h)
add_library(${PROJECT_NAME}_Rectangle
        ${LIB_WAY}
        ${CMAKE_CURRENT_SOURCE_DIR}/rectangle_.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/rectangle_.h)

target_include_directories(${PROJECT_NAME}_CandyBar
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${PROJECT_NAME}_Rectangle
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})