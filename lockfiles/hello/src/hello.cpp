#include <iostream>
#include "hello.h"

void hello(){
    #ifdef NDEBUG
    std::cout << "Hello World after mod Release!" <<std::endl;
    #else
    std::cout << "Hello World after mod Debug!" <<std::endl;
    #endif
}
