#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()
{
	fstream infile;
	infile.open("input.txt");

	int inputNum;
	int sum = 0;
	vector<int> tableFileDigits;

	while (!infile.eof())
	{
		infile >> inputNum;
		tableFileDigits.push_back(inputNum);
		sum += sum + inputNum;
	}

	for (int i : tableFileDigits)
	{
		cout << i << endl;
	}

	cout << "\nsum of file is: " << sum << endl;
	
	infile.close();

	return 0;
}
