#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

//const
Circle::Circle()
{
	radius = 1;
}
Circle::Circle(double radius)
{
	this->radius = radius;
}
//killer
Circle::~Circle()
{
	//cout << "Im a killer I love to destroy objects and gonna eat em all\n";
}
//setters
void Circle::setRadius(double& radius)
{
	this->radius = radius;
	cout << "set radius for object:\n";
	cin >> radius;
}
//getters
double Circle::getRadius()
{
	return radius;
}
double Circle::circumference()
{
	return 2 * numberPi * radius;
}
double Circle::area()
{
	return (2 * pow(radius,2));
}