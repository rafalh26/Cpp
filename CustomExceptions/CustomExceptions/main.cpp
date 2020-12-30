#include "AngryCatException.h"
#include <iostream>

using namespace std;

void feedKitty(int numTreats);

int main()
{
	int numTreats = 0;

	cout << "How many treats do you want to feed kitty?" << endl;
	cin >> numTreats;

	try
	{
		feedKitty(numTreats);
	}
	catch (const AngryCatException& err)
	{
		cout << err.what() << endl;
	}

}

void feedKitty(int numTreats)
{
	if (numTreats < 3)
	{
		int x = 1;
		throw AngryCatException();
	}
	else if (numTreats <= 6)
	{
		throw AngryCatException("Im still not happy !\n");
	}
	cout << "Kitty is happy with " << numTreats << " treats." << endl;
}