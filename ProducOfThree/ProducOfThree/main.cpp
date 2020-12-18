#include <iostream>
using namespace std;

double multiply(int num1,int num2,int num3);

int main()
{
	int input, input2, input3;
	cout << "enter 3 numbers separeted with enter key: \n";
	cin >> input;
	cin >> input2;
	cin >> input3;

	multiply(input, input2, input3);

	double result = multiply(input, input2, input3);
	cout << result;
	return 0;
}

double multiply(int num1, int num2, int num3)
{
	return num1 * num2 * num3;
}