#include <iostream>
#include <string>
#include "Building.h"
using namespace std;

int main()
{
	Building building1(20,2,"red");
	Building building2(40,1000,"indu");
	Building building3(2,10,"grey");
	Building house(3, 20, "b&W");
	Building newSpecialHouse(777, 999, "special");

	newSpecialHouse.print();


	house.setNumStories(3), house.setNumWindows(20), house.setColor("white");
	building1.setNumStories(2), building1.setNumWindows(10), building1.setColor("pink");


	house.print();
	building1.print();
	building2.print();
	building3.print();

	return 0;
}