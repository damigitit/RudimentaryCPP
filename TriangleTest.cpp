/*
Author: Damian Archer
Course: CIS 215
Date: 8-14-2021
Assignment: Week 13 Assignment -- Abstract Inheritance Problem
Comments: This is the TriangleTest.cpp
*/


#include "Triangle.cpp"
#include <iostream>

int main()
{
	//Look Mr.G, I made an almost flat triangle.
	Triangle t("yellow", 2.0, 3.0, 4.99998999999); // instantiate a Triangle.

	// output
	cout << "Area: " << t.getArea() << endl // And Heron's formula still works!
	<< "Perimeter: " << t.getPerimeter() << endl
	<< "Color: " << t.getColor() << endl;
}