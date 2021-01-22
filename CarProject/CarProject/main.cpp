#include "Car.h"
#include <memory>
#include <iostream>

int main()
{
	unique_ptr<Car> myCar = make_unique<Car>("color red", 3);
	cout << myCar->getNumDoors() << " doors and is " << myCar->getColor();
}