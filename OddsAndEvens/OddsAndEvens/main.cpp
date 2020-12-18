#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	for (int i = 0; i <= 50; i++)
	{
		if (i % 2 == 0)
			cout << i << " is even"<<endl;
		else
			cout << i << " is odd"<<endl;
	}



	return 0;
}
