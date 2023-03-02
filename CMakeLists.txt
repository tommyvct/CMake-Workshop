# we need the CMake running this be 3.16 or greater
cmake_minimum_required(VERSION 3.16)

# define the project, description, and languages used
project(cmake_workshop
    DESCRIPTION "UMIEEE CMake workshop"
    LANGUAGES CXX)

# commandline options:
# - `-DBUILD_SHARED_LIBS=ON`
#   this option is used by add_library() to determine whether dynamic or static linkage is used
# - `-DCMAKE_INSTALL_PREFIX="../install"`
#   tells CMake where to install our executable.

# This can also be specified from the commandline by `-DREPEAT=7`
option(REPEAT "How many times to repeat?")
# if unspecified, REPEAT here will be OFF, which is not a number
# we have to give a default value here
if(NOT REPEAT)
    set(REPEAT 4)
endif()

# set C++ standard
set(CMAKE_CXX_STANDARD 17)

# define our target, with the name and a list of source files
add_executable(hello_world hello.cpp)

# target-centric approach, always try to use something that starts with `target_` when possible
# don't do global changes easily

# scope: PRIVATE VS PUBLIC
# TL;DR: PUBLIC propagates the change to its immediate consumer and consumers of it.
#        PRIVATE stops at its immediate consumer.
# https://stackoverflow.com/questions/69783203/examples-of-when-public-private-interface-should-be-used-in-cmake

# pass compiler definition for this target
target_compile_definitions(hello_world PRIVATE "REPEAT=${REPEAT}")
# CMake will execute the `CMakeLists.txt` in this directory
add_subdirectory(some_lib)

# link the `some_lib` library which we added above, to our `hello_world` executable
target_link_libraries(hello_world PRIVATE some_lib)

# tell CMake that we want to copy the built binaries from these targets for install
install(TARGETS hello_world)