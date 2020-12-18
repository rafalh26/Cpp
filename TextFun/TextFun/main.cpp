#include <iostream>
#include <string>

using namespace std;


int main()
{
	char singleChar = 'a';
	string myName = "Rafał";
	string yourName = "name";

	cout << "Whats Your name: \n";
	cin >> yourName;
	cout << myName << endl;
	cout << singleChar;
	cout << "While Your name is: " << yourName << endl;


	return 0;
}