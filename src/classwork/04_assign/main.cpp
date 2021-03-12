//write includes statements
#include <iostream>
#include "loops.h"

//using namespace std;  
using namespace std;

//write using statements for cin and cout

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{	
	int num = 1;	

	while (num != 0)
	{
		cout<<"Enter a Number to find its factorial: ";
		cout<<"( Number must be between 1 - 10 ) ";
		cin>>num; 
	
		cout << "Factorial of " << num << " is: " << factorial(num) <<"\n";  
		cout<<"\n";

	}

	return 0;
	
}