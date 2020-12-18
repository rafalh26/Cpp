#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fullName, location;
	int initialScore;

	cout << "Enter number from 0-100 of ur liking: \n";
	cin >> initialScore;
	cin.get();
	cout << "Whats Ur full name: \n";
	getline(cin, fullName);
	cout << "Enter Ur city, state/province, country\n";
	getline(cin, location);
	


	cout << "\n\n\nHello, " << fullName << "\nWe heard you are from " << location << "\nYour original score is: " << initialScore << ", but with five points added, Your score is now: " << (initialScore + 5) << "\n Great work\n";


	return 0;
}