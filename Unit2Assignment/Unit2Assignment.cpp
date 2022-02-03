// Unit2Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//define variables
    int penny_input, penny_rem, dollar_amount, quarters_amount, dime_amount, nickel_amount, penny_amount;


	//define constants
	const int DOLLAR = 100;
	const int QUARTER = 25;
	const int DIME = 10;
	const int NICKEL = 5;
	const int PENNY = 1;


	
	//request input from the user
	cout << "Please enter the amount of pennies: " << endl;
	cin >> penny_input;
	//Calculate amount
	dollar_amount = penny_input / DOLLAR;
	penny_rem = penny_input % DOLLAR;

	quarters_amount = penny_rem / QUARTER;
	penny_rem = penny_rem % QUARTER;

	dime_amount = penny_rem / DIME;
	penny_rem = penny_rem % DIME;

	nickel_amount = penny_rem / NICKEL;
	penny_rem = penny_rem % NICKEL;

	penny_amount = penny_rem / PENNY;

	//display output
	cout << "The dollar amount is = " << dollar_amount << endl;
	cout << "The quarter amount is = " << quarters_amount << endl;
	cout << "The dime amount is = " << dime_amount << endl;
	cout << "The nickel amount is = " << nickel_amount << endl;
	cout << "The penny amount is = " << penny_amount << endl;
}

