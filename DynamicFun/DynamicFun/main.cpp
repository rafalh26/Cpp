#include<iostream>
using namespace std;

int main()
{
	int* myIntPtr = new int(123);
	bool* myBoolPtr = new bool(1);

	cout <<boolalpha<< *myBoolPtr << endl;
	cout << *myIntPtr << endl;
	
	delete myBoolPtr;
	myBoolPtr = nullptr;

	delete myIntPtr;
	myIntPtr = nullptr;

	return 0;
}