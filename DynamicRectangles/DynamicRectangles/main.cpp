#include "Rectangle.h"
#include <iostream>
using namespace std;

int main()
{
	Rectangle* table[3];
	table[0] = new Rectangle(200,30);
	table[1] = new Rectangle(23, 12);
	table[2] = new Rectangle(12, 8);
	table[0]->printData();
	table[1]->printData();
	table[2]->printData();
	for (int i = 0; i < 3; i++)
	{
		delete table[i];
	}
	return 0;
}