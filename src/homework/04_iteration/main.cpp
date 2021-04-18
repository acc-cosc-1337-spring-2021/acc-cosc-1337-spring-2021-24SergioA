// MAIN file
//write include statements
#include<iostream>
#include<string>
#include "dna.h"

//write using statements
using std::cout;using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int choice;
	cout<<" Enter Choice "<< "\n";
	cout<<" 1. For DNA Content "<<"\n";
	cout<<" 2. For DNA Reversion "<<"\n";
	cout<<" 3. For DNA Complement "<<"\n";
	cin>> choice;
	
	cout<<"\n"; // for formatting
	
	if (choice == 1)
	{
		// CONTENT - Statement ----------------------------
		string dna1;

		cout<<" Enter DNA to get Content: ";
		cin>>dna1;

		cout<<"\n"; // for formatting

		cout<< "DNA is: " << dna1 <<"\n";
		cout<< "Content is: "<< get_gc_content(dna1)<< "\n";

		cout<<"\n"; // for formatting

		return 0;
	}

	if (choice == 2)
	{
		// REVERSE - Statement ----------------------------

		string dna2;

		cout<<" Enter DNA to reverse: ";
		cin>>dna2;

		cout<<"\n"; // for formatting

		cout<< "DNA entered is: " << dna2 <<"\n";
		cout<< "Reverse is: "<< get_reverse_string(dna2)<< "\n";

		cout<<"\n"; // for formatting

		return 0;
	}

	if (choice == 3)
	{
		// COMPLEMENT - Statement -------------------------
		string dna3;

		cout<< " Enter DNA strand: ";
		cin>>dna3;

		cout<<"\n"; // for formatting

		cout<< " DNA entered is:  " << dna3;
		cout<< " Complemented DNA is: " << get_dna_complement(dna3) << "\n";

		cout<<"\n"; // for formatting

		return 0;
	}
}
