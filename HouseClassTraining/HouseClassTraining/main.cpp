#include <iostream>
#include <string>
#include "Building.h"
using namespace std;

void printBuilding(const Building& newBuilding);

int main()
{
	Building building1;
	Building building2;
	Building building3;
	Building house;

	building1.setColor("redish"), building1.setStories(40), building1.setWindows(1000);
	building2.setColor("blue"), building2.setStories(20), building2.setWindows(400);
	building3.setColor("purple"), building3.setStories(10), building3.setWindows(100);
	house.setColor("white"), house.setStories(3), house.setWindows(10);

	printBuilding(house);
	printBuilding(building1);
	printBuilding(building3);
	printBuilding(building2);


	return 0;
}
	//block access to fields	//pass just object by ref not all fields...
void printBuilding(const Building& newBuilding)
{
	cout << newBuilding.getColor() << " building with " << newBuilding.getStrories() << " Stories and " << newBuilding.getWindows() << " windows\n";
}
