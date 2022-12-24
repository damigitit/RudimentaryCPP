/*
Author: Damian Archer
Course: CIS 215
Date: 8-8-2021
Assignment: Week 12 Homework -- Fun with Composition Points, and Lines
Comments:  This is the Point class definition
*/

#include "Point.h"

using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
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

