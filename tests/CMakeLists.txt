cmake_minimum_required(VERSION 3.10)
project(tests)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.16.0.zip
)
FetchContent_MakeAvailable(googletest)    

enable_testing()

add_executable(test_math math_test.cpp)
target_link_libraries(test_math GTest::gtest_main math)

include(GoogleTest)
gtest_discover_tests(test_math)
