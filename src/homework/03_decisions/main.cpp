//write include statements
#include <iostream>
#include "decisions.h"

using std::cout; using std::cin;


int main() 
{
	int choice, grade;

	// display for the menu
	cout<<"MAIN MENU \n";
	cout<<"\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch \n";
	cout<<"3-Exit\n";
	cout<<"\n";

	//user chooses from options 1, 2, or 3
	cout<<"Select an option: ";
	cin>>choice;

	// code for choices 1 & 2 
	if (choice == 1 || choice == 2)
	{
		cout<<"Enter your grade as a number. \n";
		cin>>grade;
		  
		if (grade >=0 && grade <=100)
		{
			switch (choice)
			{
				case 1: 
					cout<<"Your letter grade is an " << get_letter_grade_using_if(grade);
					break;

				case 2: 
					cout<<"Your letter grade is an " <<get_letter_grade_using_switch(grade);
					break;

				default:
					cout<<"Please enter a valid number grade ";
					break;
			}
		}
		
		//displays when user enters a letter or other misc. marks.
		else 
		{
			cout<<"Please enter a valid number grade. \n";
		}
	
	}

	//choice #3, closing the program.
	else if (choice==3)
	{
		cout<<"Got it, closing the program. Thanks for stopping by!";
	}
	
	//displays when user something not 1, 2 or 3 at menu.
	else
	{
		cout<<"Please enter the number of which option you would like. ";
	}
		

	return 0;
}