#include <iostream>
using namespace std;

int main()
{
	char grade;
	cout << "Please enter a letter grade \n";
	cin >> grade;
	
	switch (grade)
	{
		case 'A':
		case 'a':
			cout << "Great job!" << endl;
		break;
		case 'B':
		case 'b':
			cout << "Good job!" << endl;
		break;
		case 'C':
		case 'c':
			cout << "You can do much better!" << endl;
		break;
		case 'D':
		case 'd':
			cout << "You are getting close to failing!" << endl;
		break;
		case 'F':
		case 'f':
			cout << "You are failing the cource!" << endl;
		break;
		default:
			cout << "You have entered invalid grade. Try again. \n";

	}
	return 0;
}