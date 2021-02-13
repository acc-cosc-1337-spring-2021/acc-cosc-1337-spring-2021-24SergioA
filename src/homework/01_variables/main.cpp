//write include statements
#include "variables.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;	using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	double meal_amount;
	double tip_rate;
	//double tip_amount;
	//30double tax_amount;
	//double total;

	cout<<"What's the meal amount: ";
	cin>>meal_amount;

	auto tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Tip rate: ";
	cin>>tip_rate;

	auto tip_amount = get_tip_amount(meal_amount, tip_rate);

	auto total = tip_amount + tax_amount + meal_amount;

	cout<<"Meal amount:  " <<meal_amount<< std::endl;
	cout<<"Sales Tax:    " <<tax_amount<< std::endl;
	cout<<"Tip Amount:   " <<tip_amount<< std::endl;
	cout<<"Total:        " <<total<< std::endl;

	return 0;
}
