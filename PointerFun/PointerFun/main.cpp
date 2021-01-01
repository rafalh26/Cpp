#include <iostream>
using namespace std;
int main()
{
	int myLovelyInt = 150;
	int* somePtr = &myLovelyInt;
	double myDouble = 3.14;
	double* myDoublePtr = &myDouble;

	cout << endl << myDoublePtr << endl;
	cout <<*myDoublePtr<< endl;


	cout << myLovelyInt << "   now its" << somePtr << endl;
	cout << "pointere dereferenced" << *somePtr << endl;
	*somePtr = 200;

	cout << "now its " << myLovelyInt << endl;
	return 0;
}