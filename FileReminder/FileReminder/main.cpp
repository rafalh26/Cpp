#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ofstream toFile;

	toFile << fixed;

	toFile.open("log.txt");

	double myDouble = 2.321f;
	toFile << "text\n" <<setw(12)<<setprecision(10)<<myDouble;

	toFile.close();

	return 0;
}