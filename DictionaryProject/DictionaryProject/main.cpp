#include "Dictionary.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

void mainMenu(Dictionary& dictionaryObj);
void addWord(Dictionary& dictionaryObj);
void findWord(Dictionary& dictionaryObj);
void printData(Dictionary& dictionaryObj);

int main()
{
	Dictionary newDictionary;
	mainMenu(newDictionary);

	

	return 0;
}


void mainMenu(Dictionary& dictionaryObj)
{
	int input = 9;
	while (input != 0)
	{

		cout << "1.) Add word to dictionary\n";
		cout << "2.) Find word in dictionary\n";
		cout << "3.) Print all words in dictionary\n";
		cout << "0.) Exit\n";
		cin >> input;

		if (input!= 1 && input!= 2 && input!=3 && input!=0)
		{
		cout << "error choose 1,2,3 or 0 for exit" << endl;
		}


		if (input == 1)
		{
			addWord(dictionaryObj);
		}
		else if (input == 2)
		{
			findWord(dictionaryObj);
		}
		else if (input == 3)
		{
			printData(dictionaryObj);
		}
		
	}
	cout << "Program Done!";
}
void addWord(Dictionary& dictionaryObj)
{
	string userInputKey, userInputDef;
	cout << "Add word to dictionary" << endl;
	cin >> userInputKey;
	cin.get();

	cout << "What definition U want to provide for that word: " << endl;
	getline(cin, userInputDef);

	dictionaryObj.setWord(userInputKey,userInputDef);
}
void findWord(Dictionary& dictionaryObj)
{
	cout << "What word are U looking for?: " << endl;
	string userInputKey;
	cin >> userInputKey;
	cin.get();

	cout<< dictionaryObj.getWord(userInputKey)<<endl;
}
void printData(Dictionary& dictionaryObj)
{
	std::cout << "test print all\n";
	dictionaryObj.printAll();
}