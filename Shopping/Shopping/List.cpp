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
	//initialization
	if (names.empty())
	{
		names.push_back(name);
		counters.push_back(0);
	}

	//actual function
	bool isAdded = 0;
	for (int i = 0; i < getSize(); i++)
	{
		if (name.compare(names[i]) == 0)
			isAdded = 1;
	}
	whileCounter = names.size();

	for (int i = 0; i < whileCounter; i++)
	{
		if (name.compare(names[i]) == 0)
		{
			names[i] = name;
			counters[i]++;
			return;
		}
		else if (isAdded == 0)
		{
			names.push_back(name);
			counters.push_back(1);
			isAdded = 1;
		}
	}
}

void List::printData()
{
	for (int i = 0; i < getSize(); i++)
	{
		cout << names[i] << " " << counters[i] << endl;
	}
}