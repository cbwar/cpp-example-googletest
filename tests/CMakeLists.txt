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


foreach(TEST_SOURCE ${TEST_SOURCES})
    get_filename_component(TEST_NAME ${TEST_SOURCE} NAME_WE)
    add_executable(${TEST_NAME} ${TEST_SOURCE})
    target_link_libraries(${TEST_NAME} GTest::gtest_main ${SHARED_LIBS})
    gtest_discover_tests(${TEST_NAME})
endforeach()
