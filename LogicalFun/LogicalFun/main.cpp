#include <iostream>
using namespace std;

/*
	logical operators:
	AND		&&
	OR		||
	NOT		!p
*/

int main()
{	
	bool isRaining, isWarm;
	isRaining = 0;
	isWarm = 1;


	cout << boolalpha;
	cout << "And: " << (isRaining && isWarm) << endl;
	cout << "Or: " << (isRaining || isWarm) << endl;
	cout << "Not: " << (!isRaining) << endl;
	cout << "Not: " << (!isWarm) << endl;



	return 0;
}