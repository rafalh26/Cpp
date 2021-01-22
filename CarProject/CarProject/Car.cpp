#include "Car.h"
#include <string>

using namespace std;

Car::Car(string color, int numDoors)
{
	this->color = color;
	this->numDoors = numDoors;
}
string Car::getColor() const
{
	return color;
}
int Car::getNumDoors() const
{
	return numDoors;
}