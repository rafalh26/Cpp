#include <iostream>
#include <string>
#include <stack>
#include <queue>

using namespace std;

void storeReverse(string originString, stack<char>& reverseStack);
bool isPalindrome(string originString);
void printResult(string originString);
void testQue();

int main()
{
	testQue();

	string myArray[5] = { "racecar","fudge","civic", "bob","dogs" };

	for (auto a : myArray)
	{
		printResult(a);
		cout << "\n";
	}


	return 0;
}

void storeReverse(string originString, stack<char>& reverseStack)
{
	for (auto c : originString)
	{
		reverseStack.push(c);
	}
}
bool isPalindrome(string originString)
{
	stack<char> reverseStack;
	storeReverse(originString, reverseStack);

	bool result = 1;

	if (originString.length() == reverseStack.size())
	{
		for (char c : originString)
		{
			char currentChar = reverseStack.top();
			if (currentChar != c)
			{
				result = 0;
				break;
			}
			reverseStack.pop();
		}
	}
	else
	{
		result = 0;
	}
	return result;
}
void printResult(string originString)
{
	cout << "is " << originString << " a palindrome?\t"
		<< boolalpha << isPalindrome(originString);
}
void testQue()
{
	queue<string> myNames;
	
	myNames.push("John");
	myNames.push("Sally");
	myNames.push("Bob");
	myNames.push("Sam");
	myNames.push("Ali");
	myNames.push("Karen");
	do
	{
		cout << myNames.front();
		myNames.pop();
	} while (!myNames.empty());
	cout << "\n";
}