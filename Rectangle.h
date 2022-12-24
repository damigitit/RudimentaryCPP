/*
Author: Damian Archer
Course: CIS 215
Date: 7-28-2021
Assignment: Week 11 Homework -- Fun with Points
Comments: This is the class interface for Point.cpp
*/

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{

	public:
		void setWidth(double);
		void setLength(double);

		double getWidth() const;
		double getLength() const;
		double getArea() const;

		Rectangle();
		Rectangle(double, double);

		private:
			double width;
			double length;
};

#endif