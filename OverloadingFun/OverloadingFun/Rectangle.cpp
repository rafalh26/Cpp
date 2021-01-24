#include "Rectangle.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

Rectangle::Rectangle(){}
Rectangle::Rectangle(int inputA, int inputB)
{
	this->inputA = inputA;
	this->inputB = inputB;
}
int Rectangle::getInputA() const
{
	return inputA;
}
int Rectangle::getInputB() const
{
	return inputB;
}
//string Rectangle::getData(vector<Rectangle*> objPointers)
//{
//	
//}
string Rectangle::doMath(int inputA, int inputB)
{
	string doMathResult = "";
	double field = 0;	double perimeter = 0;
	field = (double)inputA * (double)inputB;
	perimeter = (2 * (double)inputA) + (2 * (double)inputB);
	doMathResult = "field is: " + to_string(field) + " perimeter is: " + to_string(perimeter) + "\nthat Rect was of: " + to_string(inputA) + " X " + to_string(inputB) + "\n";
	return doMathResult;
}

bool Rectangle::operator==(const Rectangle& other) const
{
	return inputA==other.inputA && inputB == other.inputB;
}

bool Rectangle::operator!=(const Rectangle& other) const
{
	return inputA != other.inputA && inputB != other.inputB;
}
//Rectangle Rectangle::operator+(const Rectangle& other) const
//{
//
//}
//void operator=(consts Rectangle& other)
//{
//
//}