/*
Author: Damian Archer
Course: CIS 215
Date: 7-28-2021
Assignment: Week 11 -- Fun with Points
Comments:  This is the Point class definition
*/

#include "Point.h"
#include<iostream>
#include<cstdlib>

using namespace std;

Point::Point()
{
	x = 1.0;
	y = 1.0;
}

Point::Point(double px, double py)
{
	x = px;
	y = py;
}

void Point::setX(double px)
{
	x = px;
}

void Point::setY(double py)
{
	y = py;
}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

int Point::getLocation() const
{
	if (x == 0 && y == 0)
		return 0;
	else if (x >= 0)
		return (y < 0) ? 4 : 1;
	else
		return (y < 0) ? 3 : 2;
}

