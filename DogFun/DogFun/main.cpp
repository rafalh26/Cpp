#include "Dog.h"
#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	try
	{
		Dog breed1("bullcrapterrier");
		Dog breed2("Poodle");
	}
	catch (const runtime_error& err)
	{
		cout<<err.what();
	}
	return 0;
}