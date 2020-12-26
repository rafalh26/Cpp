#include "Pizza.h"
#include <iostream>
#include <vector>

using namespace std;

//constr
Pizza::Pizza(string name, int diameter, int cost)
{
	this->name = name;
	this->diameter = diameter;
	this->cost = cost;
	this->topping = topping;

	string sauce = "tomato sauce";
	topping.push_back(sauce);
	topping.push_back("cheese");
}
//setters
void Pizza::addTopping()
{
	string toppingInput = "default";
	do
	{
		cout << "Add ur topping"<<"leave empty line to finish:\n";
		getline(cin, toppingInput);
		topping.push_back(toppingInput);
	} while (toppingInput != "");

}
//getters
int Pizza::getSize() const
{
	return diameter;
}
int Pizza::getCost() const
{
	return cost;
}
string Pizza::getName() const
{
	return name;
}
void Pizza::printToppings()
{
	int maxsize = 0;
	maxsize = topping.size();
	for (int i = 0; i < maxsize; i++)
	{
		cout << topping[i] << endl;
	}
}
//destr
Pizza::~Pizza()
{
}
