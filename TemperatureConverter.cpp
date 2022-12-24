/*
Author: Damian Archer
Course: CIS 215
Date: 7-7-2021
Assignment: Week 8 -- TemperatureConverter.cpp
Comments:
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double toFahrenheit(double, char);
double toCelsius(double, char);
double toKelvin(double, char);
double toRankine(double, char);

int main()
{
	string input;
	double degrees;
	char scale;

	cout << "Please enter a numeric value for the temperature:" << endl;
	getline(cin, input);
	stringstream ss(input);
	ss >> degrees;

	cout << "Please enter a character for the scale ('C', 'F', 'K', or 'R'): " << endl;
	getline(cin, input);
	scale = input[0];

	// Based on the output example in the handout, I decided not to specify a precision using
	// cout << setprecision(1) << fixed <<
	if (scale == 'F')
		cout << toCelsius(degrees, scale) << " C, " << toKelvin(degrees, scale) << " K, " << toRankine(degrees, scale) << " R" <<  endl;
	else if (scale == 'C')
		cout << toFahrenheit(degrees, scale) << " F, " << toKelvin(degrees, scale) << " K, " << toRankine(degrees, scale) << " R" << endl;
	else if (scale == 'K')
		cout << toCelsius(degrees, scale) << " C, " << toFahrenheit(degrees, scale) << " F, " << toRankine(degrees, scale) << " R" << endl;
	else
		cout << toCelsius(degrees, scale) << " C, " << toFahrenheit(degrees, scale) << " F, " << toKelvin(degrees, scale) << " K" << endl;
}

double toFahrenheit(double degrees, char scale)
{
	if (scale == 'C')
		return degrees * 1.8 + 32;
	else if (scale == 'K')
		return degrees * 1.8 - 459.67;
	else // defaults to Rankine
		return degrees - 459.67;
}

double toCelsius(double degrees, char scale)
{
	if (scale == 'F')
		return (degrees - 32) / 1.8;
	else if (scale == 'K')
		return degrees - 273.15;
	else // defaults to Rankine
		return (degrees - 32 - 459.67) / 1.8;
}

double toKelvin(double degrees, char scale)
{
	if (scale == 'F')
		return (degrees + 459.67) / 1.8;
	else if (scale == 'C')
		return degrees + 273.15;
	else // defaults to Rankine
		return degrees / 1.8;

}

double toRankine(double degrees, char scale)
{
	if (scale == 'F')
		return degrees + 459.67;
	else if (scale == 'C')
		return degrees * 1.8 + 32 + 459.67;
	else  // defaults to Kelvin
		return degrees * 1.8;
}