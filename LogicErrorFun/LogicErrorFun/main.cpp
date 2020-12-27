#include <iostream>
#include <vector>
#include <stdExcept>

using namespace std;

int main()
{
	vector<int> myNums;
	exception:
	try
	{
		myNums.resize(myNums.max_size() + 1);
	}
	catch (const length_error& err)
	{
		cout << "too big vector?: ";
		cout << err.what() << endl;
	}
	return 0;
}