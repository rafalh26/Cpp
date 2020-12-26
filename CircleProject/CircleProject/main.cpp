#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

void printData(Circle& anyCircle);

int main()
{
	Circle nr1;
	Circle nr2(5);

	printData(nr1);
	printData(nr2);

	return 0;
}

void printData(Circle& anyCircle)
{
	cout << "Area of this circle is: \n\t" << anyCircle.area() << "\n Circumference of that circle is: \n\t"
		 <<anyCircle.circumference() << "\n Radius of Circle is: \n\t" << anyCircle.getRadius() << endl;
}