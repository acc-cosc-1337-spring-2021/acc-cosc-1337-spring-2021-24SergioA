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
    
    std::cout<<"The Factorial of " <<  num << " is : " << fact << std::endl;
   

    /*
    // num is the user's input
    // digit is the varible that carries ' num '
    int digit = num;

    // sum will do the math and save the user's under a newer variable
    int sum = digit;

    // To make the variable empty
    int total = 0;
    
    for (int i = sum - 1; i > 0; i--)
    {
        total = sum * i;
    }
    std::cout<<"factorial of " <<  digit << " is : " << total << std::endl;
    */
    
    return 0;
    
}