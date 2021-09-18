//write include statements
#include <iostream>
#include <hwexpressions.h>

//write namespace using statement for cout
using std::cin;
using std::cout;




/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total_cost;
	// purpose of the program
	cout<< "This programs calculates the bill for a restaurant with sales tax and tip included. .\n";

	// get the cost of the meal and the tip rate
	cout<< "Enter the cost of the meal: ";
	cin>>meal_amount;
	cout << "Enter the percentage you would like to tip. ";
	cin >> tip_rate;

	//tax_rate on meal
	tax_amount = get_sales_tax_amount(meal_amount);

	//tip rate for the meal
	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total_cost = meal_amount + tax_amount + tax_rate;

	//output to the user
	cout << "\n";
	cout << "Your receipt\n";
	cout << "Meal amount:  $" << meal_amount << "\n";
	cout << "Sales tax:  $" << tax_amount << "\n";
	cout << "Tip amount:  $" << tip_amount << "\n";
	cout << "Total cost:  $" << total_cost << "\n\n";




	return 0;
}
