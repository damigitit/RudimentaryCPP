/*
Author: Damian Archer
Course: CIS 215
Date: 6-18-2021
Assignment: Week 5 -- NumberGuessingGame.cpp
Comments:
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int number{((rand() % 100) + 1)};
	int guesses{0};
	int userGuess;

	cout << "I have selected a number between 1 and 100...";

	do // do... while loop because guessing and checking needs to run at least once.
	{
		cout << endl << "Enter a guess: ";
		cin >> userGuess;
		guesses++;

		// if...else statement as my one selection structure because user either guessed the number, or didn't.
		// Also, I know you have a distaste for the switch...case structure.
		if (userGuess == number)
			break; // the only way out, is in.
		else
			(userGuess < number) ? (cout << "Your guess was too low.") : (cout << "Your guess was too high."); // conditional *operator*

	} while (1); // continuation condition 1 as control option to fulfill requirement of unlimited guesses.
	cout << "It took you " << guesses << " tries to guess the correct number." << endl;
}

