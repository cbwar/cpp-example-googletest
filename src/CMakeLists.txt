cmake_minimum_required(VERSION 3.10)
project(src)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(math SHARED math.cpp)

add_executable(hello main.cpp)
target_link_libraries(hello math)