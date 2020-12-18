#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;

int main()
{
	int rolldice;
	int i = 0;


	srand(time(nullptr));

	for (i; i < 10; i++)
	{
		rolldice = rand() % 6 + 1;
		cout << rolldice << endl;
	}



	return 0;
}