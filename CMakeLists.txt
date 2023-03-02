# we need the CMake running this be 3.16 or greater
cmake_minimum_required(VERSION 3.16)

# define the project, description, and languages used
project(cmake_workshop
    DESCRIPTION "UMIEEE CMake workshop"
    LANGUAGES CXX)

# commandline options:
# - `-DCMAKE_INSTALL_PREFIX="../install"`
#   tells CMake where to install our executable.


# set C++ standard
set(CMAKE_CXX_STANDARD 17)

# define our target, with the name and a list of source files
add_executable(hello_world hello.cpp)

# tell CMake that we want to copy the built binaries from these targets for install
install(TARGETS hello_world)