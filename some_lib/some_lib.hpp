#pragma once

#include <string>

// dllexport boilerplate
#if defined(SOME_LIB_DLL)
#   if defined(_MSC_VER)
#       if defined(SOME_LIB_COMPILE)
#           define SOME_LIB_API __declspec(dllexport)
#       else
#           define SOME_LIB_API __declspec(dllimport)
#       endif
#   elif defined(__GNUC__) || defined(__clang__)
#       if defined(SOME_LIB_COMPILE)
#           define SOME_LIB_API __attribute__ ((visibility ("default")))
#       endif
#   endif
#endif

#if !defined(SOME_LIB_API)
#   define SOME_LIB_API 
#endif

SOME_LIB_API std::string repeat(int times, std::string what);