# define our library, with the name and a list of source files
add_library(some_lib some_lib.cpp)

# For Windows DLL
if(BUILD_SHARED_LIBS AND WIN32)
    target_compile_definitions(some_lib PUBLIC SOME_LIB_DLL)
    target_compile_definitions(some_lib PRIVATE SOME_LIB_COMPILE)
endif()

# where to find the headers of this lib
target_include_directories(some_lib PRIVATE .)

# tell CMake that we want to copy the built binaries from these targets for install
install(TARGETS some_lib)