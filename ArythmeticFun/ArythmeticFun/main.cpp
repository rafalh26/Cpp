/*
	All Arythmetics operators
	+ addition operator
	- substraction operator
	* multiplication operator
	/ division operator
	% modulus operator
*/
#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	int result = 10;
	result += 10;	//result = result +10
	result *= 2;	//result = result*2

	int myresult = 31;
	cout << myresult<<endl;
	myresult++;
	cout << myresult<<endl;
	myresult--;
	cout << myresult<<endl;

	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
	cout << "result = " << result << endl;


	return 0;
}