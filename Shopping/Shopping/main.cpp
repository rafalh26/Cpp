#include "List.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	fstream readFile;
	readFile.open("shopping.txt");
	
	if (!readFile)
	{
		cerr << "Cannot open file\n";
		return -1;
	}
	List myListObj;

	int whileCounter = 0;

	while (!readFile.eof())
	{
		whileCounter++;
		string name;
		readFile >> name;
		myListObj.setName(name,whileCounter);
	}
	myListObj.printData();
	
	readFile.close();
	
	return 0;
}