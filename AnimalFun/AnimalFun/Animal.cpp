#include "Animal.h"
#include <string>
#include <iostream>

using namespace std;

Animal::Animal(string name, double weight)
{
	this->name = name;
	this->weight = weight;
}

void Animal::setName(string name)
{
	this->name = name;
}
void Animal::setWeight(double weight)
{
	this->weight = weight;
}

string Animal::getName()
{
	return name;
}
double Animal::getWeight()
{
	return weight;
}
string Animal::makeNoise()
{
	return "unknown";
}