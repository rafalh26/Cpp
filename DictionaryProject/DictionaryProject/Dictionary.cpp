#include "Dictionary.h"

void Dictionary::setWord(string& userInputKey, string& userInputDef) 
{
	myDictionary.insert({ userInputKey, userInputDef });
	cout << "input saved" << endl;
}

string Dictionary::getWord(string& userInputKey)
{		
	string result ="not found";
	for (auto i : myDictionary)
	{
		if (i.first == userInputKey)
		{
			return result = i.first + " " + i.second;
		}
	}
	return result;
}

void Dictionary::printAll() const
{
	for (auto i : myDictionary)
	{
		cout << i.first << " " << i.second << endl;
	}
}