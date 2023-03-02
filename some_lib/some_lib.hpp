#pragma once

#include <string>


#ifdef SOME_LIB_EXPORT
    #define SOME_LIB_API __declspec(dllexport)
#else
    #define SOME_LIB_API 
#endif

SOME_LIB_API std::string repeat(int times, std::string what);