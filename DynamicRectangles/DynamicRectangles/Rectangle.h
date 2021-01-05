#pragma once
class Rectangle
{
public:
	Rectangle(double lineA, double lineB);
	void printData();
private:
	double lineA, lineB;
	double area =0;
	double perimeter=0;
};