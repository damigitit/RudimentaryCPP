/*
Author: Damian Archer
Course: CIS 215
Date: 7-13-2021
Assignment: Week 9 -- GaltonBoard.cpp
Comments:
*/

#include <array>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

char dropMarble();	// function prototype

int main()
{									// page 287 of our text doesn't go into great depth about the size_t type.
									// Does it make sense to use the size_t type for constants even if it's not used with array?
	const size_t amtPegRows{7}; 	// or should I have called declared this line as const short ROWS{7}; since it is not used in an array.
	const size_t amtSlots{8};
	array<int, amtSlots> slots{0,0,0,0,0,0,0,0};
	unsigned marbles;
	srand(static_cast<unsigned int>(time(0))); // seeding random number generator here for use in dropMarble()

	cout << "Please enter the amount of marbles you would like to drop into the Galton Board: ";
	cin >> marbles;

	for (unsigned marble = 0; marble < marbles; marble++)		// for each marble that is dropped...
	{
		size_t pos{0};											// size_t because it is used as an array subscript

		for (unsigned row = 0; row < amtPegRows; row++) 		// for each row of pegs the marble crosses...
		{
			if (dropMarble() == 'R') pos++; 					// pretty slick!
		}
		slots[pos]++;
	}

	// Output
	cout << endl << endl << "RESULTS" << endl;
	for (size_t slot{1}; slot <= amtSlots; slot++)
	{
		cout <<"Slot " << slot << " ==> "<< slots[slot-1] << endl;
	}
}

char dropMarble()
{
	return (rand()%2 == 1) ?  'L' : 'R';
}


