include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_sprintf test_sprintf.cc)
target_link_libraries(test_sprintf ${GTEST_BOTH_LIBRARIES})
add_test(Test_sprintf test_sprintf)

add_executable(test_LedDriver test_LedDriver.cc)
target_link_libraries(test_LedDriver ${GTEST_BOTH_LIBRARIES})
add_test(Test_LedDriver test_LedDriver)

add_executable(test_circular_buffer test_circular_buffer.cc)
target_link_libraries(test_circular_buffer ${GTEST_BOTH_LIBRARIES})
add_test(Test_circular_buffer test_circular_buffer)

