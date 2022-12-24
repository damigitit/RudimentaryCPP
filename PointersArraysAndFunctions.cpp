/*
Author: Damian Archer
Course: CIS 215
Date: 7-13-2021
Assignment: Week 10 -- Fun with Pointers, Arrays, and Functions.
Comments:
*/

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
void printArray(int[]);
void findMax(int[]);

int main()
{
int numbers[10]; // declare the array (I wanted to use an array constant ARRAY_SIZE)
srand(time(0)); // seed rand() function

// use an optimal looping structure to fill the array
for (size_t num{0}; num < 10; num++)
{
	numbers[num] = (rand() % 100) + 1;
}

printArray(numbers);
findMax(numbers);

}

void printArray(int arr[]) // I didn't use the const size_t ARRAY_SIZE because it was only asked that these function have an int[] parameter
{
	cout << "The elements in the array are:\n";
	for (size_t num{0}; num < 10; num++)
	{
		cout << arr[num] << " ";
	}
	cout << endl << endl;
}

void findMax(int arr[])
{
	int* intPtr{nullptr};
	for (size_t num{0}; num < 10; num++)
	{
		cout << "The address of " << arr[num] << " is " << (intPtr = &arr[num]) << endl;
	}

	int maxIdx{0};
	intPtr = &arr[maxIdx]; // without this line there was a bug! If the arr[0] was the largest
							// then the intPtr would never be reset in the below for loop's if statement.

	for (size_t num{0}; num < 10; num++)
	{
		if (arr[num] > arr[maxIdx])
			intPtr = &arr[maxIdx = num]; // is this indexing/assignment operation okay? it works and takes up only one line.
										// Gotta be careful for side-effects like what happened with the bug above!
	}

	cout << "The largest value "<< arr[maxIdx] << endl <<
	"is at address " << &arr[maxIdx] << endl <<
	"with and actual value of " << *intPtr << endl <<
	"The address of the array is " << arr << endl; // I went ahead an didn't use the & operator here.  I did notice there is a difference
													// between arr and &arr.  I thought this was interesting because I thought the address
													// of an array was the same as the address of its first element.  It doesn't appear that
													// is the case when I used the &arr here.
}