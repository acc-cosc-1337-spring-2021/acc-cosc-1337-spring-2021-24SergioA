#include "decision.h"
#include <iostream>
//Write the include statement for decisions.h here

//Write namespace using statements for cout and cin

//Prompt the user for a number and if the number is between 0 and 100 
//call both get_letter_grade_using_if and get_letter_grade_using_switch 
//functions to display the letter grade to screen otherwise display number out of range.

int main() 
{
	// Add space when starting
	std::cout<<"\n";

	// If - else statament
	int grade1;

	std::cout<<"What's the test grade? ";
	std::cin>>grade1;
	
	std::cout << "Grade of " << grade1 << " is: " << get_letter_grade_using_if(grade1) <<"\n";  
	//std::cout<<get_letter_grade_using_if(grade1);

	std::cout<<"\n";

	// Switch - Statement
	int grade2;

	std::cout<<"What's the test grade? ";
	std::cin>>grade2;

	std::cout << "Grade of " << grade2 << " is: " << get_letter_grade_using_switch (grade2) <<"\n";  

	std::cout<<"\n";

	return 0;
}
