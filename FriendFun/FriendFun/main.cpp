#include "Rectangle.h"
#include <iostream>

using namespace std;

int main()
{
	Rectangle myRect(40,35);
	cout<<myRect.getInputA();
	printMe(myRect);
	printData(myRect);
}

void printMe(Rectangle& rect)
{
	rect.inputA = 20;
	cout << rect.getInputA();
}

void printData(Rectangle& rect)
{
	cout<<rect.doMath(rect.inputA, rect.inputB);
}