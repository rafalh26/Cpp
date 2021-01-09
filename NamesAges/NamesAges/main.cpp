#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fromNamesFile;
	ifstream fromAgeFile;
	ofstream toFile;

	string name;
	int age;

	fromNamesFile.open("names.txt");
	fromAgeFile.open("ages.txt");
	toFile.open("output.txt");

	if (!fromNamesFile || !fromAgeFile)
	{
		cout << "cannot open files. Wrong file name?\n";
		return 1;
	}

	while (!fromNamesFile.eof() && !fromAgeFile.eof())
	{
		getline(fromNamesFile, name);
		fromAgeFile >> age;
		toFile << name << " " << age << endl;
		cout << name << " " << age << endl;
	}

	fromNamesFile.close();
	fromAgeFile.close();
	toFile.close();

	return 0;
}