#include "Dictionary.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

void addWord();
void findWord();
void printAll();
void mainMenu();

int main()
{
	mainMenu();


}


void mainMenu()
{
	int input = 0;
	cout << "1.) Add word to dictionary\n";
	cout << "2.) Find word in dictionary\n";
	cout << "3.) Print all words in dictionary\n";
	cout << "0.) Exit\n";
	
	cin >> input;
	cout << endl;

	switch (input)
	{
	case 1:
		addWord();
		break;
	case 2:
		findWord();
		break;
	case 3:
		printAll();
		break;
	case 0:
		cout << "Program done!\n";
		break;
	default:
		cout << "Wrong choice choose 1,2,3 or 0 to exit\n";
		mainMenu();
	}
}
void addWord()
{
	string userInputKey, userInputDef;
	cout << "section 1.) add word to dictionary" << endl;
	cin >> userInputKey;
	cout <<"Ur word input: "<< userInputKey << endl;
	cout << "What definition U want to provide for that word: " << endl;
	getline(cin, userInputDef);
	cin.get();
	cout << "Ur def input is: " << endl;

	Dictionary newWord;
	newWord.setWord(userInputKey,userInputDef);
	mainMenu();
}
void findWord()
{
	std::cout << "test find word\n";
	mainMenu();
}
void printAll()
{
	std::cout << "test print all\n";
	mainMenu();
}