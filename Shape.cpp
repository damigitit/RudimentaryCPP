/*
Author: Damian Archer
Course: CIS 215
Date: 8-14-2021
Assignment: Week 13 Assignment -- Abstract Inheritance Problem
Comments: this is the Shape.cpp class definition
*/

#include "Shape.h"

Shape::Shape()
{
	color = "white";
	filled = false;
}

Shape::Shape(string color, bool filled)
{
	setColor(color);
	setFilled(filled);
}

string Shape::getColor() const
{
	return color;
}

void Shape::setColor(string myColor)
{
	color = myColor;
}

bool Shape::isFilled() const
{
	return filled;
}

void Shape::setFilled(bool myFilled)
{
	filled = myFilled;
}
