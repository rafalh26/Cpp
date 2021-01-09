#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void printFormatted(ofstream& outfile, int n);

int main()
{
	ofstream outfile;

	int n = 0;
	cout << "how many numbers?: \n";
	cin >> n;
	printFormatted(outfile, n);
}

void printFormatted(ofstream& outfile, int n)
{
	outfile.open("output.txt");

	outfile << hexfloat << showpoint;
	cout << fixed << showpoint;

	for (int i = 1; i <= n; i++)
	{
		outfile << setw(12) << setprecision(2) << (i * 3.44);
		outfile << setw(22) << setprecision(10) << (i * 3.44) << endl;
		cout << setw(12) << setprecision(2) << (i * 3.44);
		cout << setw(22) << setprecision(10) << (i * 3.44) << endl;

	}
	outfile.close();
}