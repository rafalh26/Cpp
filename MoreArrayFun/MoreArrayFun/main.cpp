#include <iostream>
using namespace std;

int main()
{
	int myArray[10];
	for (int i=0;i<10;i++)
	{
		myArray[i] = i +1;
	}

	for (auto myArrayTest : myArray)
	{
		cout << myArrayTest << endl;
	}


	return 0;
}