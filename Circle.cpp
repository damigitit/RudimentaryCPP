/*
Author: Damian Archer
Course: CIS 215
Date: 8-14-2021
Assignment: Week 13 Assignment -- Abstract Inheritance Problem
Comments: this is the class implementation of the Circle.cpp derived class
*/

#include "Circle.h"

Circle::Circle()
{
	radius = 1;
}

void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getDiameter() const
{
	return radius * 2;
}

double Circle::getPerimeter() const
{
	return 2 * 3.14159 * radius;
}

double Circle::getArea() const
{
	return 3.14159 * (radius * radius);
}

