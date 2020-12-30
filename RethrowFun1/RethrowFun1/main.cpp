#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

void proccessPositive(int num);
void doSomething(int num);

int main()
{
	int input;
	try 
	{
		cout << "Enter number to preccess" << endl;
		cin>>input;
		doSomething(input);
		cout << "main was able to complete task" << endl;
	}
	catch (const invalid_argument& err1)
	{
		cout << "MAIN ERROR!" << endl;
		cout << err1.what() << endl;
	}
	catch (const out_of_range& err2)
	{
		cout << "main says ur stupid ur number cant exeed 100"<<endl;
		cout << err2.what() << endl;
	}
	return 0;
}

void proccessPositive(int num)
{
	cout << "welcome to possitive processor" << endl;
	if (num > 100)
	{
		throw out_of_range("Number cannot be greater then 100");
		
	}
	else if (num >= 0)
	{
		cout << "great u passed possitive" << endl;
	}
	else
	{
		throw invalid_argument("Negative number passed in");
	}
}
void doSomething(int num)
{
	try
	{
		proccessPositive(num);
		cout << "Do something could process that num!" << endl;
	}
	catch (const invalid_argument& err1)
	{
		cout << " do something says u screwed up\n";
		throw;
	}
	catch (const out_of_range& err2)
	{
		cout << " do something says u screwed up/nToo big numb";
		throw;
	}
}
