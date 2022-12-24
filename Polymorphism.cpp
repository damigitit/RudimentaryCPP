/*
Author: Damian Archer
Course: CIS 215
Date: 8-21-2021
Assignment: Week 14 -- Fun with Polymorphism
Comments: This is my Polymorphism.cpp example of base and derived classes
*/

#include <iostream>
#include <string>
using namespace std;

// Pokemon base class
class Pokemon
{
	public:
		Pokemon()
		{
			cout << "\nConstructing an Pokemon... " << endl;
		}

		virtual void attack() = 0;

		int getLevel()
		{
			return level;
		}

		void setLevel(int lvl)
		{
			level = lvl;
		}

	private:
		int level;

};


// Three derived classes from Pokemon base class
class Pikachu: public Pokemon
{
	public:
		Pikachu(int lvl)
		{
			setLevel(lvl);
			cout << "A Pikachu has been born" << endl;
		}

		void attack() // overrides virtual function, as necessary...
		{						// accesses the private member of base class with getLevel()
			cout << "This " << element << " element pokemon attacks with level " << getLevel() << " Thunder Shock!" <<  endl;
		}

	private:
		const string element = "Electric"; // one class member that the base class doesn't have.
									// BTW, I almost didn't include this, because the base class virtually doesn't have an attack() function.
};

// The other two derived classes are structured similarly.
class Squirtle: public Pokemon
{
	public:
		Squirtle(int lvl)
		{
			setLevel(lvl);
			cout << "A Squirtle has been born" << endl;
		}

		void attack()
		{
			cout << "This " << element << " element pokemon attacks with level " << getLevel() << " Water Pulse!" << endl;
		}

	private:
		const string element = "Water";
};

class Charmander: public Pokemon
{
	public:
		Charmander(int lvl)
		{
			setLevel(lvl);
			cout << "A Charmander has been born" << endl;
		}

		void attack()
		{
			cout << "This " << element << " element pokemon attacks with level " << getLevel() << " Fire Spin!" << endl;
		}

	private:
		const string element = "Fire";
};

int main()
{
	Pikachu pikaPika(20);
	pikaPika.attack();

	Squirtle squirtSquirt(30);
	squirtSquirt.attack();

	Charmander charChar(40);
	charChar.attack();
}