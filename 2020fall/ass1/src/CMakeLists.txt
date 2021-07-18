add_library(${PROJECT_NAME}_IMPL_LIB ${LIB_WAY} ${CMAKE_CURRENT_SOURCE_DIR}/big_int_impl.cpp)

target_link_libraries(${PROJECT_NAME}_IMPL_LIB ${PROJECT_NAME}_INCLUDE_IMPL)

add_library(${PROJECT_NAME}_LIB ${LIB_WAY} ${CMAKE_CURRENT_SOURCE_DIR}/big_int.cpp)

target_link_libraries(${PROJECT_NAME}_LIB PUBLIC
        ${PROJECT_NAME}_IMPL_LIB
        )

