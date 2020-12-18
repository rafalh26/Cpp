#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

//global variables / vectors
vector<int> carIndex;
vector<string> carPlate;



void getData();
void printData();
void writeData();
void openData();

int main()
{
	int inputChoice;

	steeringWheel:

	cout << "0.) Exit Program\n";
	cout << "1.) Write Data \n";
	cout << "2.) Print Data \n";
	cout << "3.) Save Ur Data to File ... (DataPrototype.txt)\n";
	cout << "4.) Open Previously Saved Data from file ... (DataPrototype.txt)\n";

	cin >> inputChoice;

	switch (inputChoice)
	{
	case 1:
		getData();
		goto steeringWheel;
	case 2:
		printData();
		break;
	case 3:
		writeData();
		break;
	case 4:
		openData();
		break;
	case 0:
		break;
	default:
		cout << "Error wrong choice \n";
		goto steeringWheel;
	}


	return 0;
}

void getData()
{
	int inputCarIndex;
	int i = 1;
	cout << "Welcome in Prototype Program for Renting Cars; \n";
	cout << "Please Enter Ur Car Index Numbers That U want to assign : \n";
	cout << "Only positive numbers allowed\n";
	cout << "Write 0 or negative to exit \n";

	cout << "Car nr. 1 \n";
	cin >> inputCarIndex;
	while (inputCarIndex > 0)
	{
		carIndex.push_back(inputCarIndex);
		i++;
		cout << "Enter index nr for your car nr. " << i << endl;
		cin >> inputCarIndex;
	}
	cout << "Total cars you have entered: " << i << endl;
	cout << "Here are Ur entries: \n";

	for (int x : carIndex)
	{
		cout << x << endl;
	}

}

void printData()
{

}

void writeData()
{

}

void openData()
{

}