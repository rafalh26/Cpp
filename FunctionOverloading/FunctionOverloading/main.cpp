#include<iostream>
#include<string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int n3Result);



int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("John", "Baugh");
	int n3Result = getResult(3);

	cout << "result num is: " << resultNum << endl;
	cout << "result name is: " << nameResult << endl;
	cout << "result n3 is: " << n3Result << endl;

	return 0;
}

int getResult(int num1, int num2)
{

	return num1 * num2;
}

string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

int getResult(int n3Result)
{
	int	result = (n3Result * n3Result * n3Result);
	return result;
}