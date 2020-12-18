#include <iostream>
#include <string>


using namespace std;


void printMyName();
void printSomething();



int main()
{
	printMyName();
	printSomething();

	return 0;
}




void printMyName()
{
	string name = "Rafa³\n";
	cout << name << endl;
}


void printSomething()
{
	cout<< "Hey! Look Im here"<<endl;
}
