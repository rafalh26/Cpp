#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	const int ARRAY_SIZE = 5;

	int myArray[ARRAY_SIZE]{ 15,20,22,13,6 };
	string names[4]{"Rob,Sally,John,Ed"};

	for (int i = 0; i < 4; i++)
	{
		cout<<names[i] << endl;
	}

	/*for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}*/

	for (auto name : names)
	{
		cout << name << endl;
	}


	return 0;
}