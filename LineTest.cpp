/*
Author: Damian Archer
Course: CIS 215
Date: 8-8-2021
Assignment: Week 12 Homework -- Fun with Composition Points, and Lines
Comments:  This is the test of the Line class.
*/

#include "Line.cpp"
#include <iostream>

using namespace std;

int main()
{
	int x;
	int y;

	cout << "Please input an x value for point 1: ";
	cin >> x;
	cout << "Please input a y value for point 1: ";
	cin >> y;
	Point p1(x,y);

	cout << "Please input an x value for point 2: ";
	cin >> x;
	cout << "Please input a y value for point 2: ";
	cin >> y;
	Point p2(x,y);

	Line line(p1, p2);

	cout << endl << "\nThe slope of the line is " << line.getSlope() << endl
	<< "The length of the line is " << line.getLength() << endl;
}