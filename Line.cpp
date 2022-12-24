/*
Author: Damian Archer
Course: CIS 215
Date: 8-8-2021
Assignment: Week 12 Homework -- Fun with Composition Points, and Lines
Comments: This is the class interface for Line.cpp
*/

#include "Line.h"
#include <cmath>

using namespace std;

Line::Line(Point a, Point b)
{
	p1 = a;
	p2 = b;
}

double Line::getSlope() const
{
	return static_cast<double>((p1.getY() - p2.getY()) / (p1.getX() - p2.getX()));
}

double Line::getLength() const
{
	return static_cast<double>(sqrt(pow((p2.getX() - p1.getX()), 2) + pow((p2.getY() - p1.getY()), 2)));
}

