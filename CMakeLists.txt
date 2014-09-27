cmake_minimum_required(VERSION 2.8)
project(TDDEC_GTEST CXX)
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c11 -Wall -Werror -Weffc++")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Werror")
set(CMAKE_MODULE_PATH ${TDDEC_GTEST_SOURCE_DIR}/cmake/Modules)

find_package(GTest REQUIRED)
enable_testing()

add_subdirectory(tests)

