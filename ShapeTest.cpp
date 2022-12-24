/*
Author: Damian Archer
Course: CIS 215
Date: 8-14-2021
Assignment: Week 13 Assignment -- Abstract Inheritance Problem
Comments: This is the ShapeTest.cpp
*/

#include "Circle.cpp"
//#include <string>
#include <iostream>

using namespace std;

int main()
{
	cout << "Let's instantiate a circle object " << endl;
	Circle myCircle;

	double r;
	cout << "enter a value for the radius " << endl;
	cin >> r;

	myCircle.setRadius(r);

	cout << "The diameter of the circle is " << myCircle.getDiameter() << endl;

	cout << "Set the color of the circle to red" << endl;

	myCircle.setColor("red");
	cout << "The color of the circle is " << myCircle.getColor() << endl;

	cout << "The area of the circle is " << myCircle.getArea() << endl;

}