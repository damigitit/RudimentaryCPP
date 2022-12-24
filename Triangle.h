/*
Author: Damian Archer
Course: CIS 215
Date: 8-14-2021
Assignment: Week 13 Assignment -- Abstract Inheritance Problem
Comments: This is the derived Triangle.h class header definition
*/

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.cpp"

class Triangle: public Shape
{
	private:
		double side1; //A
		double side2; //B
		double side3; //C

	public:
		Triangle(string, double, double, double);
		virtual double getPerimeter() const;
		virtual double getArea() const;

};
#endif
