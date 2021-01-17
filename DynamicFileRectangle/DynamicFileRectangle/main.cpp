#include "Rectangle.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream readFile;
	ofstream writeFile;
	readFile.open("rectangles.txt");
	writeFile.open("output.txt");
	vector<Rectangle*> objPointers;
	int counter = -1;

	while (!readFile.eof())
	{
		counter++;
		int inputA, inputB;
		readFile >> inputA;
		readFile >> inputB;
		objPointers.push_back(new Rectangle(inputA, inputB));
		Rectangle tmpDataConverter = *objPointers[counter];
		writeFile<<tmpDataConverter.doMath(inputA,inputB);
		cout << tmpDataConverter.doMath(inputA, inputB);
		delete objPointers[counter];
	}
	readFile.close();
	writeFile.close();
	objPointers.clear();
	
	return 0;
}