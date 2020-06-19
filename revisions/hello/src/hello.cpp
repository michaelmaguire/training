#include <iostream>
#include "hello.h"

void hello(){
    #ifdef NDEBUG
    std::cout << "Hello World new rev Release!" <<std::endl;
    #else
    std::cout << "Hello World new rev Debug!" <<std::endl;
    #endif
}
