/*
Author: Damian Archer
Course: CIS 215
Date: 6-11-2021
Assignment: Week 4 -- TheBonusProblem.cpp
Comments:
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	int employeeBonus;
	int department;
	int dependents;
	string name;

	// First and last names
	cout << "Please enter the employee's first and last name, separated by a space: ";
	getline(cin, name);

	// Department number and dependents
	cout << endl << "Please enter the department number and amount of dependents, separated by a space: ";
	cin >> department >> dependents;

	// primary exception -- any employee with more than 5 dependents gets a 5000 bonus.
	if (dependents > 5)
		employeeBonus = 5000;
	else
		// secondary exception -- employees in department 2 will get an extra 1000, otherwise this basic bonus of 1000.
		(department == 2) ? (employeeBonus = 2000) : (employeeBonus = 1000);

	// output results
	cout << name << endl << "Annual bonus: $" << employeeBonus << endl;
}