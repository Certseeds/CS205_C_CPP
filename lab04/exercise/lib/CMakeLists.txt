add_library(CandyBar SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/CandyBar.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/CandyBar.cpp)
target_include_directories(CandyBar INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_library(pizza SHARED
        ${CMAKE_CURRENT_SOURCE_DIR}/pizza.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/pizza.cpp)
target_include_directories(pizza INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
# target_link_libraries(lab04)