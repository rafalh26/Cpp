#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

void fillVector(vector<int>& myVector);
void printVector(const vector<int>& myVector);
void countFives(const vector<int>& myVector);
void sortVector(vector<int>& myVector);

int main()
{
	vector<int> myVector;
	
	fillVector(myVector);
	printVector(myVector);
	countFives(myVector);

	cout << "replacing 5 with 99s" << endl;
	replace(myVector.begin(), myVector.end(), 5, 99);

	countFives(myVector);
	printVector(myVector);

	sortVector(myVector);
	printVector(myVector);

}


void fillVector(vector<int>& myVector)
{
	srand(time(nullptr));
	int tmp = 0;
	for (int i = 0; i < 20; i++)
	{
		tmp = rand() % 5 + 1;
		myVector.push_back(tmp);
	}
}
void printVector(const vector<int>& myVector)
{
	for (auto a : myVector)
	{
		cout << a << endl;
	}
}
void countFives(const vector<int>& myVector)
{
	int numFives = count(myVector.begin(), myVector.end(), 5);
	cout << "number of fives: " << numFives << endl;
}
void sortVector(vector<int>& myVector)
{
	sort(myVector.begin(), myVector.end());
}