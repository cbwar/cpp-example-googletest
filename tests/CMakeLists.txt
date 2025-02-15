cmake_minimum_required(VERSION 3.10)
project(tests)

include(FetchContent)

FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.16.0.zip
)
FetchContent_MakeAvailable(googletest)    
include(GoogleTest)

enable_testing()

file(GLOB TEST_SOURCES "*.cpp")
list(APPEND SHARED_LIBS math)


add_executable(runUnitTests ${TEST_SOURCES})
target_link_libraries(runUnitTests GTest::gtest_main gcov ${SHARED_LIBS})
# target_compile_options(runUnitTests PRIVATE -coverage)
gtest_discover_tests(runUnitTests)
