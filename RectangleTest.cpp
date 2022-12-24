/*
Author: Damian Archer
Course: CIS 215
Date: 7-28-2021
Assignment: Week 11 Homework -- Fun with Points
Comments: This is test of the Rectangle
*/

#include<iostream>
#include "Rectangle.cpp"
using namespace std;

int main()
{
	Rectangle box;
	double rectWidth;
	double rectLength;

	cout << "This program will calculate the area of a rectangle.\n";
	cout << "What is the width of the rectangle?\n";
	cin >> rectWidth;
	box.setWidth(rectWidth);

	cout << "What is the length of the rectangle?\n";
	cin >> rectLength;
	box.setLength(rectLength);

	cout << "Here is the data on the rectangle.\n";
	cout << "Width = " << box.getWidth() << endl;
	cout << "Length = " << box.getLength() << endl;
	cout << "Area = " << box.getArea() << endl << endl;

	Rectangle anotherBox(7.0, 5.0);

	anotherBox.setWidth(2.0);
	anotherBox.setLength(2.0);
	cout << "Here is the data on anotherBox.\n";
	cout << "Width = " << anotherBox.getWidth() << endl;
	cout << "Length = " << anotherBox.getLength() << endl;
	cout << "Area = " << anotherBox.getArea() << endl;

}