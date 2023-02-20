#include "some_lib.hpp"

std::string repeat(int times, std::string& what)
{
    std::string ret;

    for (size_t i = 0; i < times; i++)
    {
        ret += what + "\n";
    }
    
    return ret;
}