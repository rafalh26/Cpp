#include <iostream>
#include <array>
#include <vector>
#include <string>

using namespace std;




int main()
{
	int myNums[2][3]{
{1,2,3},
{4,5,6}
	};

	cout << myNums[0][2] << endl;


	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << myNums[row][col] << " ";
		}
		cout << "\n";
	}


	for (int i = 1; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			cout << myNums[i][j] << " ";
		}
		cout << "\n";
	}




	return 0;
}