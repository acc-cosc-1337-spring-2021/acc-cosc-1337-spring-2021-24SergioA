// CPP file
#include <iostream>
#include "dna.h"
#include <string>
//#include <algorithm>
using namespace std;


/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & dna)
{  
    double gc_content = 0;
    
    for (int i = 0; i < dna.size (); i++)
    {
        if ( dna[i] == 'G' || dna[i] == 'C' )
        {
            gc_content++;
        }
    }
    double percentage = gc_content / dna.size();
    return percentage;

}


/*
Write code for function get_reverse_string that                     AGCTATAG
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    string reverse_dna(dna);
    string rev_dna;
    for (int i = reverse_dna.size() -1; i >= 0; --i)
    {
        rev_dna += reverse_dna[i];
    }
    return rev_dna;

}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/

string get_dna_complement( string dna )
{
    string dna_comp = dna; // create string of same length
    int n = dna.length();
    for (int i=0; i<n; i++) {
        if (dna[i] == 'C')
            dna_comp[i] = 'G';
        else if (dna[i] == 'G')
            dna_comp[i] = 'C';
        else if (dna[i] == 'A')
            dna_comp[i] = 'T';
        else if (dna[i] == 'T')
            dna_comp[i] = 'A';
   }
    return dna_comp;

/* 
    string dna_comp;
    if (dna == "a" || dna == "A")
	{
		return "T";
	}
	else if (dna == "t" || dna == "T")
	{
		return "A";
	}
	else if (dna == "c" || dna == "C")
	{
		return "G";
	}
	else if (dna == "g" || dna == "G")
	{
		return "C";
	}
	else
	{
		return "Invalid";
	}
    return dna_comp;
*/

}