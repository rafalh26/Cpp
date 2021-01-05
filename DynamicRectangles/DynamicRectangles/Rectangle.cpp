#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(double lineA, double lineB)
{
	this->lineA = lineA;
	this->lineB = lineB;
	this->perimeter= (lineA * 2 + lineB * 2);
	this->area = (lineA * lineB);
}
void Rectangle::printData()
{
	cout << perimeter << endl;
	cout << area << endl;
}