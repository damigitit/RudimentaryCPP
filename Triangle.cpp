/*
Author: Damian Archer
Course: CIS 215
Date: 8-14-2021
Assignment: Week 13 Assignment -- Abstract Inheritance Problem
Comments: This is the derived class Trangle.cpp implementation
*/

#include "Triangle.h"
#include <cmath>

Triangle::Triangle(string color, double A, double B, double C)
{
	setColor(color);
	side1 = A;
	side2 = B;
	side3 = C;
}

double Triangle::getPerimeter() const
{
	return side1 + side2 + side3;
}

double Triangle::getArea() const
{
	double s = 0.5 * (getPerimeter()); // semiperimeter s
	return sqrt(s * (s - side1) * (s - side2) * (s - side3)); //  Heron's formula

}

