#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <map>
#include <string>
#include <iostream>

using namespace std;

class Dictionary
{
public:
	void setWord(string& userInputKey, string& userInputDef);
	void printAll() const;

	string getWord(string& userInputKey);
private:
	map<string, string> myDictionary;
};

#endif // !DICTIONARY_H