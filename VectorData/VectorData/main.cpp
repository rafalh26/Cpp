#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;

int main()
{
	int input,i;
	i = 2;
	vector<int> myVect;
	cout << "Enter loop nr: 1" << endl;
	cin >> input;
	while (input >= 0)
	{
		myVect.push_back(input);
		cout << "Enter loop nr: " << i << endl;
		cin >> input;
		
		i++;
	} 

	for (int a : myVect)
	{
		cout << a*2<<endl;
	}
	





	return 0;
}