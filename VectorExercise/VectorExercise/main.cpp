#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> myNames;

	myNames.push_back("Joanna");
	myNames.push_back("Katherina");
	myNames.push_back("Grandmom");
	myNames.push_back("Mark");
	myNames.push_back("Jeremiah");

	myNames.insert(myNames.begin() +2,"Dr. J.");

	myNames.pop_back();

	for (string myNamesShow : myNames)
	{
		cout << myNamesShow << endl;
	}



	return 0;
}