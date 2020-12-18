#include <iostream>
using namespace std;

int sumOfArray(int A[], int B);

int main()
{
	int myArray[7] = {4,6,8,4,2,3,6};

	
	
	int result = sumOfArray(myArray, 7);
	cout << result;
}

int sumOfArray(int A[], int B)
{
	int result = 0;
	for (int i = 0; i < B; i++)
	{
		result += A[i];
	}

	return result;
}