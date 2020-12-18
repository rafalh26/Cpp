#include <iostream>
#include <string>



using namespace std;
int main()
{
	int age;
	string fullName;
	cout << "Please enter ur full name: " << endl;
	getline(cin, fullName);
	cout << "Please enter ur age: " << endl;
	cin >> age;
	cout << fullName << " Welcome U " << age << "old preak!\n";

	return 0;
}