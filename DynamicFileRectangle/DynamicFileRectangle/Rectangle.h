#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <vector>
#include <string>

using namespace std;

class Rectangle
{
public:
	Rectangle();
	Rectangle(int inputA, int inputB);
	int getInputA();
	int getInputB();
	//string getData(vector<Rectangle*> objPointers);
	string doMath(int inputA, int inputB);
private:
	int inputA = 0;
	int inputB = 0;
};
#endif // !RECTANGLE_H
