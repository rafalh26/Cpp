#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector <int> someVec;
	vector <string> anotherVect(3);

	someVec.push_back(1);
	someVec.push_back(2);
	someVec.push_back(3);

	cout << "SomeVec size: " << someVec.size() << endl;

	anotherVect[0] = "John";
	anotherVect[1] = "Bob";
	anotherVect[2] = "Sally";

	anotherVect.push_back("Shannon");

	for (int val : someVec)
	{
		cout << val << endl;
	}

	for (string name : anotherVect)
	{
		cout << name << endl;
	}

	cout << "Front and back: " << endl;
	cout << "Front: " << anotherVect.front() << endl;
	cout << "Back: " << anotherVect.back() << endl;

	anotherVect.pop_back();
	anotherVect.insert(anotherVect.begin(), "Don");

	cout << "Now, front is " << anotherVect.front() << endl;
	cout << "Now back is " << anotherVect.back() << endl;

	return 0;
}