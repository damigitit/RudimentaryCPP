/*
Author: Damian Archer
Course: CIS 215
Date: 8-14-2021
Assignment: Week 13 Assignment -- Abstract Inheritance Problem
Comments: this is the Circle.h derived class header.  Inherits from Shape class.
*/

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.cpp"

class Circle : public Shape
{
	public:
		Circle();

		void setRadius(double);
		double getRadius() const;

		double getDiameter() const;

		// overriding Shape's virtual vunctions
		double getArea() const;
		double getPerimeter() const;

	private:
		double radius;
};
#endif

