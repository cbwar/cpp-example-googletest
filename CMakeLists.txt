project(cpp-example-googletest)
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    hello
    src/main.cpp 
    src/math.cpp)

option(BUILD_TESTS "Build the tests" OFF)

if(BUILD_TESTS)

    include(FetchContent)
    FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.16.0.zip
    )
    FetchContent_MakeAvailable(googletest)    

    enable_testing()

    add_library(math src/math.cpp)

    set(TEST_SOURCES tests/math_test.cpp)

    add_executable(test_math ${TEST_SOURCES})
    target_link_libraries(test_math GTest::gtest_main math)

    include(GoogleTest)
    gtest_discover_tests(test_math)
endif()