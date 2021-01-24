#include "Rectangle.h"
#include <iostream>

int main()
{
	Rectangle newRectA(230, 220);
	Rectangle newRectB(230, 220);
	bool truefalse = newRectA != newRectB;
	cout << truefalse;
}