#include <iostream>
#include <string>
#include "Building.h"
using namespace std;

int main()
{
	Building building1;
	Building building2;
	Building building3;
	Building house;

	house.setNumStories(3), house.setNumWindows(20), house.setColor("white");
	building1.setNumStories(2), building1.setNumWindows(10), building1.setColor("pink");

	house.print();
	building1.print();
	building2.print();
	building3.print();

	return 0;
}