#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 10> myArray{};
	for (int i = 0; i < myArray.size(); i++)
	{
		myArray[i] = i * 2;
	}
	for (auto x : myArray)
	{
		cout << x << endl;
	}

	return 0;
}