#include <iostream>
#include <memory>

using namespace std;

int main()
{
	int ARR_SIZE = 5;

	unique_ptr<double> myDoublePtr = make_unique<double>();
	auto myArray = make_unique<int[]>(ARR_SIZE);
	*myDoublePtr = 3.13;
	cout << *myDoublePtr << endl;

	unique_ptr<double> otherPtr = move(myDoublePtr);

	cout << *otherPtr << endl;

	for (int i = 0; i < ARR_SIZE; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < ARR_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}
}