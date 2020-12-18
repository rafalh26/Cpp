#include <iostream>
using namespace std;

int factorialOf(int num);


int main()
{
	int input;
	cout << "Factorial of: ";
	cin >> input;
	cout << " is ";
	cout << factorialOf(input) << endl;
	return 0;
}

int factorialOf(int num)
{
	if (num > 1)
	{
		return num * factorialOf(num-1);
	}
	return 1;
}