//cpp
#include <iostream>
#include <cmath>
#include "loops.h"

int factorial(int num)//num is 0
{
    int fact = num;

    int i = fact - 1;
    
    while (i > 1)
    {
        fact *= i;
        
        i--;
    }
        
    return fact;
    
}