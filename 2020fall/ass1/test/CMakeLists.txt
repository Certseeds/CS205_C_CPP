add_executable(${PROJECT_NAME}_test ${CMAKE_CURRENT_SOURCE_DIR}/big_int_test.cpp)

target_link_libraries(${PROJECT_NAME}_test PUBLIC
        ${PROJECT_NAME}_INCLUDE
        ${PROJECT_NAME}_LIB
        Catch)

add_executable(${PROJECT_NAME}_impl_test ${CMAKE_CURRENT_SOURCE_DIR}/big_int_impl_test.cpp)

target_link_libraries(${PROJECT_NAME}_impl_test PUBLIC
        ${PROJECT_NAME}_INCLUDE
        ${PROJECT_NAME}_IMPL_LIB
        Catch)
enable_testing()

add_test(${PROJECT_NAME}_CTEST ${PROJECT_NAME}_test)
add_test(${PROJECT_NAME}_IMPL_CTEST ${PROJECT_NAME}_impl_test)

