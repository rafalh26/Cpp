#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

void printData(Circle& anyCircle);

int main()
{
	int input = 0;
	cout << "how many circles u want to make\n";
	cin >> input;
	int* size = new int(input);
	
	double** tableOfCircles = new double*[*size];
	for (int i = 0; i < *size; i++)
	{
		double inpRadius = 0;
		cout << "what's radius of ur circle nr:"<<i+1 <<endl;
		cin >> inpRadius;
		Circle circleTmp = Circle(inpRadius);
		printData(circleTmp);
	}
	int tmpSize = *size;
	int tmpI = tmpSize;
	for (tmpSize;tmpI<tmpSize && tmpI>=0;tmpI--)
	{
		cout << "test value size:" << *size << endl;
		cout << "test value i:" << tmpI << endl;
		delete tableOfCircles[tmpI];               //error out of range!
		tableOfCircles[tmpI] = nullptr;		      //error out of range!
	}
	delete size;
	size = nullptr;
	//Circle nr1;
	//Circle nr2(5);

	//printData(nr1);
	//printData(nr2);
	
	return 0;
}

void printData(Circle& anyCircle)
{
	cout << "\tArea of this circle is: \n\t" << anyCircle.area() << "\n\tCircumference of that circle is: \n\t"
		<< anyCircle.circumference() << "\t\n Radius of Circle is: \n\t" << anyCircle.getRadius() << endl << endl;
}