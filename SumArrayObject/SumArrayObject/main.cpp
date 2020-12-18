#include <iostream>
#include <array>
using namespace std;

array<int, 10> myArray;
int arraySum(array<int, 10>);

int main()
{
	

	int input,result;
	for (int i = 0; i < 10; i++)
	{
		int index = i + 1;
		cout << "input nr: " << index << endl;
		cin >> input;
		myArray[i] = input;	
	}

	
	result = arraySum(myArray);
	cout << "Sum of array is: " << result << endl;

	return 0;
}

int arraySum(array<int, 10>)
{
	int result;
	int i = 0;
	result = myArray[0];
	i++;
	while (i < 10)
	{
		result += myArray[i];
		i++;
		//cout << result;         // TEST LINE //                    //
	}


	return result;
}
