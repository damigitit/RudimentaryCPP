/*
Author: Damian Archer
Course: CIS 215
Date: 7-28-2021
Assignment: Week 11 Homework -- Fun with Points
Comments: This is the class interface for Point.cpp
*/

#ifndef POINT_H
#define POINT_H

class Point
{
	public:
		// mutators
		void setX(double);
		void setY(double);

		// accessors
		double getX() const;
		double getY() const;
		int getLocation() const; // a calcualted sort of accessor.

		// constructors
		Point();
		Point(double, double);

		private:
			double x;
			double y;
};

#endif