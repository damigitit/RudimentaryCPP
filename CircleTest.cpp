/*
Author: Damian Archer
Course: CIS 215
Date: 6-3-2021
Assignment: Week 3 -- CircleTest.cpp
Comments: Performs no checks for data integrity.
*/

using namespace std;

#include <iostream>
#include "Circle.h"

int main()
{
	// variable declaration
	int radius;

	// Require the user to enter an integer value that is then stored in a variable
	cout << "You (the user) are required to enter an integer value for the radius: ";

	// integer entered by user is stored in a variable
	cin >> radius;

	// The integer value is used as the radius of the circle object and is instantiated here.
	Circle myCircle = Circle{radius};

	// Output to the screen values for the diameter, area, and circimference.
	cout << "Diameter: " << myCircle.getDiameter() << endl;
	cout <<	"Area: " << myCircle.getArea() << endl;
	cout <<	"Circumference: " << myCircle.getCircumference() << endl;
}

