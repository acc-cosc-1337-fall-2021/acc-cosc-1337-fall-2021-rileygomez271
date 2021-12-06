#include "func.h"
#include <iostream>
#include <string>

using namespace std;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.
*/
int main() 
{
	string dna;
	char options;
	MENU: do
	{ 
		cout << "Menu\n\n";
		cout << "1-Get GC Content" << endl;
		cout << "2-Get DNA Complement" << endl;
		cout << "3-Exit\n";
		cout << "Enter your option number: ";

		cin >> options;

	}
	while (options != '1' && options != '2' && options != '3');

	if (options == '1')
	{
		double ratio;
		cout << "Enter your DNA: ";
		cin >> dna;
		ratio = get_gc_content(dna);
		cout << "The GC content is: " << ratio << endl;

		goto MENU;
	}
	
	else if (options == '2')
	{
		string complement;
		cout << "Enter your DNA: ";
		cin >> dna;
		complement = get_dna_complement(dna);
		cout << "The DNA Complement is: " << complement << endl;

		goto MENU;
	}
	
	else 
	{
	
		char confirm;
		do
		{
			cout << "Are you sure you want to exit? (y/n) ";
			cin >> confirm;
		}
		while(confirm != 'y' && confirm != 'Y' && confirm != 'n' && confirm != 'N' );
		
		if (confirm == 'y' || confirm =='Y')
		{
			return 0;
		}
		else
		{
			goto MENU;
		}
	
	}

	return 0;
	
}