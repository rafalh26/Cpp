#include <iostream>
#include <stdexcept>
#include "WarpDrive.h"

using namespace std;

void checkTemp(WarpDrive& objOfTest);

int main()
{
	WarpDrive test1;
	WarpDrive test2;
	WarpDrive test3;

		test1.setTemp(70);
		test2.setTemp(75);
		test3.setTemp(81);

	test1.getTemp();
	test2.getTemp();
	test3.getTemp();


	return 0;
}

void checkTemp(WarpDrive)