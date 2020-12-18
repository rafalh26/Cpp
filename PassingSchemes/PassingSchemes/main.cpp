#include <iostream>
using namespace std;



void valueChanged1(int someNum);
void theeTimesN(int passNum1, int& passNum2);

int main()
{
	int myNumber = 20;

	cout << "before valueChanged1 call, my number is: " << myNumber << endl;
	valueChanged1(myNumber);
	cout << "After valueChanged1 call, my number is: " << myNumber << endl;



	cout << "input ur data for three times N: \n";
	cin >> myNumber;

	cout << "passNum2 before threeTimesN: \n" << myNumber << endl;
	theeTimesN(myNumber, myNumber);
	cout << "now after threetimesN its new value is: " << myNumber;




	return 0;
}

void valueChanged1(int someNum)
{
	someNum = 100;
}

void theeTimesN(int passNum1, int& passNum2)
{
	passNum2 = (passNum1 *= 3);
}