#include "List.h"
#include <string>
#include <iostream>

using namespace std;

int List::getSize()
{
	return names.size();
}
void List::setName(string& name, int &whileCounter)
{
	
}
void List::printData()
{
	for (int i = 0; i < getSize(); i++)
	{
		cout << names[i] << " " << counters[i] << endl;
	}
}