#include <iostream>

using namespace std;

int main()
{
	int input;
	cout << "what size of array u want:\n";
	cin >> input;
	int* myArray = new int[input];

	for (int i = 0; i < input; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < input; i++)
	{
		cout <<myArray[i] << endl;
	}

	delete[] myArray;

	return 0;
}