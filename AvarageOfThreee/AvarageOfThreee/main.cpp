#include <iostream>
using namespace std;

int main()
{
	double a, b, c, average;

	cout << "Please enter number a: \n";
	cin >> a;
	cout << "Please enter number b: \n";
	cin >> b;
	cout << "Please enter number c: \n";
	cin >> c;
	average = (a + b + c) / 3;

	cout <<"Average is : "<< average << endl;

	return 0;
}