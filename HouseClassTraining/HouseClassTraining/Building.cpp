#include "Building.h"
#include <iostream>

Building::Building()
{

}

Building::Building(int numStories, int numWindows, string color)
{
	this -> numStories = numStories;
	this -> numWindows = numWindows;
	this -> color = color;
}
Building::~Building()
{
	cout << "test " << color << " have " << numWindows << " windows and " << numStories << " Stories are being removed\n";
}
void Building::setNumStories(int numStories)
{
	this->numStories = numStories;
}
void Building::setColor(string color)
{
	this->color = color;
}
void Building::setNumWindows(int numWindows)
{
	this->numWindows = numWindows;
}

int Building::getNumStories()
{
	return numStories;
}
int Building::getNumWindows()
{
	return numWindows;
}
string Building::getColor()
{
	return color;
}


void Building::print()
{
		cout << "Building is " << color << " have " << numWindows << " Windows and " << numStories << " stories\n";
}

