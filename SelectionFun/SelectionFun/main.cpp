#include<iostream>
using namespace std;

int main()
{
	
	
	int age;

	cout << "Welcome to the pub and grille! \n";
	
	cout << "Enter ur age: \n";
	cin >> age;


	if (age >= 21)
	{
		cout << "Here have a beer \n";
	}
	else if(age >= 16)
	{
		cout << "Here have a coke \n"<<"At least U can drive \n";
	}
	else
	{
		cout << "Here have a coke \n";
	}
	cout << "Thanks for coming to the Pub amd Grille! \n";


	return 0;
}