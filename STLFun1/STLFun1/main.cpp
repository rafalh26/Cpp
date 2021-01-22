#include <iostream>
#include <deque>

using namespace std;

void printDeque(deque<int> deck);

int main()
{
	deque<int> myDeck;

	myDeck.push_back(1);
	myDeck.push_back(5);
	myDeck.push_back(10);

	myDeck.push_front(7);

	printDeque(myDeck);
	return 0;
}

void printDeque(deque<int> deck)
{
	for (auto a : deck)
	{
		cout << a << endl;
	}
	cout << endl;
}