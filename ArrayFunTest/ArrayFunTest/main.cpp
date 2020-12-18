#include <iostream>
#include <array>
using namespace std;


int main()
{
	array<int, 5> myIntArray{};

	myIntArray[0] = 2;
	myIntArray[1] = 2;
	myIntArray[2] = 2;
	myIntArray[3] = 2;
	myIntArray[4] = 2;

	for (int a : myIntArray)
	{
		cout << a << endl;
	}

	cout << "Size of Array: " << myIntArray.size() << endl;
	return 0;
}