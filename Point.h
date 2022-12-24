/*
Author: Damian Archer
Course: CIS 215
Date: 8-8-2021
Assignment: Week 12 Homework -- Fun with Composition Points, and Lines
Comments: This is the class interface for Point.cpp
*/

#ifndef POINT_H
#define POINT_H

class Point
{
	public:
		// constructors
		Point();
		Point(double, double);

		// mutators
		void setX(double);
		void setY(double);

		// accessors
		double getX() const;
		double getY() const;

		private:
			double x;
			double y;
};

#endif