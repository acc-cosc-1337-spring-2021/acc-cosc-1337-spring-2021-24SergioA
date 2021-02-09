//Write the include statement for types.h here
#include "types.h"
#include <iostream>

using std::cout;	using std::cin;

/*
Write include for capturing input from 
keyboard and displaying output to screen
*/


int main() 
{
	int num1; //are going to be the input variables
	int num2;

	cout<<"Enter num1: ";
	cin>>num1;

	cout<<"Enter num2: ";
	cin>>num2;

	int t = multiply_number(num1, num2);

	cout<<"Multiplicaiton is: "<<t;

	return 0;
}