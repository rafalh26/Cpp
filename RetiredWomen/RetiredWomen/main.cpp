#include <iostream>
using namespace std;
int main()
{
	int age;
	char gender;
	bool check;

	cout << "Please enter ur Age: " << endl;
	cin >> age;
	cout << endl << "Please enter Ur geneder: " << endl;
	cin >> gender;

	switch (gender)
	{
	case 'f':
	case 'F':
		check = 1;
		break;
	default:
		check = 0;
	}

	if (check == 1)
	{
		if (age >= 60)
		{
			cout << "U qualify" << endl;
		}
		else
		{
			check = 0;
		}
	}
	else
	{
		check = false;
	}

	if (check == 0)
	{
		cout << "Ur not qualified";
	}
	
	
	
	return 0;
}