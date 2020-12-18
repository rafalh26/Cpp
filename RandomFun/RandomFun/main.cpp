#include <iostream>
#include <cstdlib>
#include <ctime>



using std::cout;
using std::cin;
using std::endl;


int main()
{
	int val1, val2;

	srand(time(nullptr));
	val1 = rand() % 10;
	val2 = rand() % 10 + 1;

	cout << val1 << endl;
	cout << val2 << endl;

	return 0;
}