//write include statements
#include <iostream>
#include "dna.h"

//write using statements
using std::cout; 
using std::cin;


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
		int num;
		int num1;
		int num2;

		do
		{
			//display for main menu
			cout << "\n";
			cout << "What would you like to do?: \n";
			cout << "1 - Calculate factorial \n";
			cout << "2 - Calculate the greatest common divisor \n";
			cout << "3 - Exit the program \n";
			cout << "\n";

			cout << "Choose an option: \n";
			cin >> choice;

			switch(choice)
			{
				case 1: 
					cout<<"Please enter any integer";
					cin >> num;
					cout << "The result is: " << factorial(num);
					break;

				case 2: 
					cout << "Please enter any integer \n";
					cin >> num1;
					cout << "Enter any other integer \n";
					cin >> num2;
					cout << "The greatest common divisor is: " << gcd(num1, num2);
					break;

				case 3: 
					cout << "Are you sure you want to exit? (Yes = 0) \n";
					cin >> choice;
					break;

				default:
					cout << "Enter a valid choice number";
					break;
			}

		}
		while (choice != 0);
		{
			cout << "Exiting program...";
		}


		return 0;
	}