cmake_minimum_required(VERSION 3.23)

project(cmake_workshop
    DESCRIPTION "UMIEEE CMake workshop"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(hello_world hello.cpp)
