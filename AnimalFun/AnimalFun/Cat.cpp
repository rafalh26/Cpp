#include "Cat.h"
#include "Animal.h"


Cat::Cat(string name, double weight) : Animal(name, weight)
{}
void Cat::chaseMouse()
{
	cout << "I'm chasing mouse!" << endl;
}
string Cat::makeNoise() const
{
	return "Meow!\n";
}
string Cat::eat() const
{
	return "Yummu Yummy I love kitty food \n";
}