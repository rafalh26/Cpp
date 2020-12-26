#include "Pizza.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void getData(Pizza& objX);

int main()
{
	Pizza pepperoni1("Pepperoni S", 8, 20);
	pepperoni1.addTopping();

	getData(pepperoni1);

	return 0;
}

void getData(Pizza& anyPizza)
{
	cout << anyPizza.getName() << " Size: "<< anyPizza.getSize() << " inches\n";
	anyPizza.printToppings();
	// input line consume function 
	cout << "That Pizza cost " << anyPizza.getCost() << " $";
}