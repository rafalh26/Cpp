#include "Rectangle.h"
#include <iostream>

int main()
{
	Rectangle* table[3];
	Rectangle rect1(20,11);
	table[0] = new Rectangle(rect1);
	rect1.printData();
	for (int i = 0; i < 3; i++)
	{
		delete table[i];
	}
	return 0;
}