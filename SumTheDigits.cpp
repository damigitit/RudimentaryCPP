/*
Author: Damian Archer
Course: CIS 215
Date: 5-26-2021
Assignment: Week 2 -- SumTheDigits.cpp
Comments:
			This program asks the user to input a number between 0-999 inclusive,
			and then produces the sum of the number provided by the user.
			Does not perform any checks for data integrity.
*/

// preprocessing directive
#include <iostream>

// using directive
using namespace std;

int main()
{
	// declare the variables to be used
	int userChoice;
	int sum{0};

	// Get user input
	cout << "Input an integer between 0 and 999 inclusive: ";
	cin >> userChoice;

	// Check if the user entered zero
	if (userChoice != 0)
	{
		// if not, then extract the last digit from user's choice and add it to sum.
		sum += userChoice%10;

		// and then reassign the variable leaving only the digits that remain in userChoice.
		userChoice = userChoice/10;
	}

	// Check to see if what remains of the userChoice is not 0.
	if (userChoice != 0)
	{
		// if not, then extract the last digit from user's choice and add it to the sum
		sum += userChoice%10;

		// and then reassign the userChoice variable leaving only the last digit left in userChoice
		userChoice = userChoice/10;
	}

	// Check to see if what remains of the userChoice is not 0.
	if (userChoice != 0)
	{
		// if there is a third digit other than 0, add the remaining digit to the sum.
		sum += userChoice;
	}

	// cout stream "gets" the result
	cout << "the sum of the three digits is " << sum << endl;
	return 0;
}
