/*
Author: Damian Archer
Course: CIS 215
Date: 7-28-2021
Assignment: Week 11 -- Fun with Points
Comments:  This is the Point test
*/

#include<iostream>
#include "Point.cpp"
using namespace std;

int main()
{

	Point point(0,0);
	double px;
	double py;

	cout << "Please enter a value for the x coordinate of the point: ";
	cin >> px;
	point.setX(px);

	cout << endl << "Please enter a value for the y coordinate of the point: ";
	cin >> py;
	point.setY(py);

	if ((point.getLocation() == 0))
		cout << "The created point is located at the origin." << endl;
	else
		cout << endl << "The created point is located in quadrant " << point.getLocation() << endl;
}


