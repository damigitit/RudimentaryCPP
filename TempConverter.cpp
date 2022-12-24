/*
Author: Damian Archer
Course: CIS 215
Date: 7-5-2021
Assignment: Week 7 -- TempConverter.cpp
Comments:
*/

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
double ConvertTemp(double, char); // I thought it was unconventional to begin this function name with a capital C

int main()
{
	string input{0};
	char scale;
	double degrees;

	cout << "Input a numeric value for the temperature" << endl;
	getline(cin, input);
	stringstream ss(input);
	ss >> degrees;

	cout << "Input \"C\" for celsius or \"F\" for Fahrenheit" << endl;
	getline(cin, input);
	scale = input[0];

	cout << "The converted temperature is " << setprecision(1) << fixed << ConvertTemp(degrees, scale)
	<< " " << (scale == 'F' ? 'C': 'F') << endl;
}

double ConvertTemp(double temp, char scale)
{
		cout << "The temperature you entered was " << temp << " " << scale << endl;
		return (scale == 'F') ? ((temp - 32) * 5 / 9) : (temp * 9 / 5 + 32);
}