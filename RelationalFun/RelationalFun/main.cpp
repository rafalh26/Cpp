#include <iostream>
using namespace std;

/*
*	Relative operators:
		>	 greater then
		>=	 greater or equal to
		<	 less then
		<=	 less or equal to
		==	 equal to
		!=	 not equal to
* 
*/



int main()
{
	int a, b, age;
	a = 15;
	b = 20;
	age = 21;
	bool areEqual = a == b;
	bool isLegal = age >= 21;

	cout << boolalpha;

	
	cout << (a < b) << endl;
	cout << areEqual << endl;
	cout << isLegal << endl;

	return 0;
}