include_directories(${GTEST_INCLUDE_DIRS})

add_executable(test_sprintf test_sprintf.cc)
target_link_libraries(test_sprintf ${GTEST_BOTH_LIBRARIES})
add_test(Test_sprintf test_sprintf)

