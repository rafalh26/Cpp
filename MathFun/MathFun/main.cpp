#include <iostream>
#include <cmath>
using namespace std;


int main()
{

	int powResult = pow(2, 3);
	int sqrlResult = sqrt(25);
	int ceilResult = ceil(4.2);
	int floorResult = floor(4.2);
	double log2Result = log2(512);

	cout << "2^3 is " << powResult << endl;
	cout << "sqrt of 25 is " << sqrlResult << endl;
	cout << "ceiling of 4.2 is " << ceilResult << endl;
	cout << "floor of 4.2 is "<<floorResult << endl;
	cout << "log2 of 512 is " << log2Result << endl;

	return 0;
}