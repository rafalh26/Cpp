#include<iostream>
using namespace std;

int main()
{
	//thats gonna be fun as heck
	int input, sum = 0;

	cout << "Welcome to fun: "<<endl;
	cout << "Please input ur integer (negative integer for quit the fun) \n";
	cin >> input;
	while (input >= 0)
	{
		sum += input;
		cout << "Please input ur integer (negative integer for quit the fun)"<<endl;
		cin >> input;
	} 

	cout << "How was ur fun?? Well U made sum of: " << sum << endl;

	return 0;
}