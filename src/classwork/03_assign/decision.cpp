//cpp
#include <iostream>
#include "decision.h"



// ELSE-IF statement
std::string get_letter_grade_using_if (int grade)
{
	if (grade >= 90 && grade <= 100)
	{
		return "A";
	}
	else if (grade >= 80 && grade <= 89)
	{
		return "B";
	}
	else if (grade >= 70 && grade <= 79)
	{
		return "C";
	}
	else if (grade >= 60 && grade <= 69)
	{
		return "D";
	}
	else if (grade >= 0 && grade <= 59)
	{
		return "F";
	}
	else
	{
		return "Invalid";
	}
}



std::string get_letter_grade_using_switch(int grade)
{
	std::string letter_grade;
	switch (grade)
	{
	case 90 ... 100:
		letter_grade = "A";
		return letter_grade; // Do we use ->  cout<< "A" 
		break;
	case 80 ... 89:
		letter_grade = "B";
		return letter_grade;
		break;
	case 70 ... 79:
		letter_grade = "C";
		return letter_grade;
		break;
	case 60 ... 69:
		letter_grade = "D";
		return letter_grade;
		break;
	case 00 ... 59:
		letter_grade = "F";
		return letter_grade;
		break;
	default:
		return "Number Given in invalid";
		break;
	}
	return letter_grade;
}
