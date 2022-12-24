/*
Author: Damian Archer
Course: CIS 215
Date: 6-3-2021
Assignment: Week 3 -- Circle.h
Comments: This class is for use with CircleTest.cpp
*/


class Circle
{
	// public access specifier
	public:
		// constructor that receives a single parameter, the radius of the circle
		explicit Circle(int radius) : radius{radius} {} // <-- Empty body

		// function to return the diameter
		int getDiameter() const
		{
			return radius*2;
		}

		// function to return the circumference
		double getCircumference() const
		{
			return 2*3.14159*radius;
		}

		// function to return the area
		double getArea() const
		{
			return 3.14159*radius*radius;
		}

	// private access specifier
	private:
		// integer variable class member
		int radius;
};