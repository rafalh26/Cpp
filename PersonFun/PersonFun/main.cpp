#include "Person.h"
#include <iostream>
#include <stdexcept>

int main()
{
	try
	{
		Person person1("Sallly");
		Person person2("Susanne");
		Person person3("John");
		Person person4("Rolph");
		Person person5("Jane");
	}
	catch (const runtime_error& err)
	{
		cout << err.what() << endl;
	}
	return 0;
}