#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name,weight)
{
	this->breed = breed;
}
string Dog::getBreed() const
{
	return breed;
}
void Dog::digHole()
{
	cout << "Hau! Hau! Digging hole \n";
}
string Dog::makeNoise() const
{
	return "Woof! Woof!\t\t";
}
void Dog::chaseCat()
{
	cout << "Here, kitty, kitty!\n";
}
string Dog::eat() const
{
	return "I love dog food!";
}
