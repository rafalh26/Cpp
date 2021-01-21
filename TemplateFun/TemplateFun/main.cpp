#include <iostream>
#include <string>
#include "Swapper.h"

using namespace std;

//double getBigger(double a, double b);
//int getBigger(int a, int b);
//string getBigger(string a, string b);


template <class T>
T getBigger(T a, T b);
template <class T>
T getSmaller(T a, T b);

int main()
{

	Swapper<int> intSwapper(5, 10);
	Swapper<string> stringSwapper("John", "Boby");

	string name1 = "what??";
	string name2 = "Nope!!";

	double biggerDouble = getBigger(3.445, 2.22);
	int biggerInt = getBigger(2, 55);
	string biggerString = getBigger(name1, name2);

	int intSmaller = getSmaller(20, 22);
	double dblSmaller= getSmaller(23.222, 23.22333211);


	cout << "Bigger items:\n"
		<< "\t" << biggerDouble << "\n"
		<< "\t" << biggerInt << "\n"
		<< "\t" << biggerString << "\n\n\n";

	cout << "Smaller items:\n"
		<< "\t" << intSmaller << "\n"
		<< "\t" << dblSmaller << "\n";

	cout << "\n\n" << "Testing Swapper:\n"
		<< intSwapper.getFirst() << " " << intSwapper.getSecond() << "\n"
		<< stringSwapper.getFirst() << " " << stringSwapper.getSecond() << "\n\n\n";

	intSwapper.swap();
	stringSwapper.swap();

	cout << "\n\n" << "After Swapper:\n"
		<< intSwapper.getFirst() << " " << intSwapper.getSecond() << "\n"
		<< stringSwapper.getFirst() << " " << stringSwapper.getSecond() << "\n\n\n";

	return 0;
}

template <class T>
T getBigger(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

template <class T>
T getSmaller(T a, T b)
{
	if (a<b)
	{
		return a;
	}
	return b;
}

//double getBigger(double a, double b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int getBigger(int a, int b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//string getBigger(string a, string b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}