#include <iostream>
using namespace std;

int main()
{
	/*
	int count = 0;

	while (count < 10)
	{
		cout << count << endl;
		count++;
	}

	//do while
	int count2 = 10;
	do
	{
		cout << count2 << endl;
		count2++;
	} while (count2 < 10);
	*/

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//}

	int input;
	cout << "please enter an integer and negative if u want to quit \n";
	cin >> input;


	while (input >= 0)
	{
		cout << input << endl;

		cout << "please enter an integer and negative if u want to quit \n";
		cin >> input;
	}

	return 0;
}