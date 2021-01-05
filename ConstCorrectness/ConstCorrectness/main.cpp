#include <iostream>

using namespace std;

void noChange(const double* const ptrA);

int main()
{
	double* pointerA = new double(20.23);
	noChange(pointerA);

	return 0;
}


void noChange(const double* const ptrA)
{
	cout << *ptrA;
}

