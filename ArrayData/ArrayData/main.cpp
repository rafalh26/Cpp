#include <iostream>
#include <array>
#include <string>
using namespace std;


int main()
{
	array<int, 5> Numbs;
	int arraySize = Numbs.size();
	int j = 0;
	for (int i = 0; i < arraySize; i++)
	{
		cout << "enter number" << endl;
		cin >> Numbs.at(i);
	}
	cout << "now ur doubled table values: \n";
	for (int printArray : Numbs)
	{
		cout << printArray*2 << endl;
	}


	return 0;
}


