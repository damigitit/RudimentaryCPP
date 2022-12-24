/*
Author: Damian Archer
Course: CIS 215
Date: 7-28-2021
Assignment: Week 11 -- Fun with Points
Comments:  This is the Point class definition
*/

#include "Rectangle.h"
#include<iostream>
#include<cstdlib>

using namespace std;

Rectangle::Rectangle()
{
	width = 1.0;
	length = 1.0;
}

Rectangle::Rectangle(double l, double w)
{
	width = w;
	length = l;
}

void Rectangle::setWidth(double w)
{
	if(w >= 0)
		width = w;
	else
	{
		cout << "Invalid data\n";
		exit(EXIT_FAILURE);
	}
}

void Rectangle::setLength(double l)
{
	if(l >= 0)
		length = l;
	else
	{
		cout << "Invalid data\n";
		exit(EXIT_FAILURE);
	}
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getArea() const
{
	return width * length;
}
