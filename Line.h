/*
Author: Damian Archer
Course: CIS 215
Date: 8-8-2021
Assignment: Week 12 Homework -- Fun with Composition Points, and Lines
Comments: This is the class interface for Line.cpp
*/

#include "Point.cpp"
#ifndef LINE_H
#define LINE_H

class Line
{
	public:
		// constructor
		Line(Point, Point);

		// function prototypes
		double getSlope() const;
		double getLength() const;

		Point p1;
		Point p2;
};

#endif
