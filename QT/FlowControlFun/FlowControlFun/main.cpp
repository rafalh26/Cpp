#include <qcoreapplication.h>
#include <qdebug.h>
#include <iostream>

using namespace std;

int main()
{
	int max = 0;
	cout << "Enter maximum\n";
	cin >> max;

	while (max > 0 && max <= 100)
	{
		for (auto i = 1;i<=max;i++)
		{
			cout << i << endl;
		}
		return 0;
	}
	cerr << "invalid number passed in\n";
}