cmake_minimum_required(VERSION 3.10)
project(cpp-example-googletest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)

option(BUILD_TESTS "Build the tests" OFF)

if(BUILD_TESTS)
    add_subdirectory(tests)
endif()
