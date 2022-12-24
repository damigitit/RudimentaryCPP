/*
Author: Damian Archer
Course: CIS 215
Date: 8-14-2021
Assignment: Week 13 Assignment -- Abstract Inheritance Problem
Comments: this is the Shape.h abstract base class
*/


#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

class Shape
{
	protected:

		Shape();
		Shape(string color, bool filled);
		double area;
		double perimeter;

	public:

		string getColor() const;
		void setColor(string color);

		bool isFilled() const;
		void setFilled(bool filled);

		virtual double getArea() const = 0;
		virtual double getPerimeter() const = 0;

	private:
		string color;
		bool filled;

};
#endif