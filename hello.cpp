#include <iostream>
#include "some_lib/some_lib.hpp"

#ifndef REPEAT
#define REPEAT 6
#endif

int main()
{
    std::cout << "Hello UMIEEE!" << std::endl;
    std::cout << repeat(REPEAT, "Join UMIEEE!") << std::endl;

    #ifdef SAY_BYE
        std::cout << "Bye!" << std::endl;
    #endif
    
    return 0; 
}