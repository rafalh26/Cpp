#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fromFile;
	ofstream toFile;

	int number;

	fromFile.open("numbers.txt");
	toFile.open("output.txt");

	if (!fromFile && !toFile)
	{
		cout << "error file cannot be opened! Wrong name?\n";
		return 1;
	}

	while (!fromFile.eof())
	{
		fromFile >> number;
		toFile << number * 2<<endl;
		cout << number*2 << endl;
	}

	fromFile.close();
	toFile.close();

	return 0;
}