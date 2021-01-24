#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <map>
#include <string>
#include <iostream>

class Dictionary
{
public:
	void setWord(const std::string& userInput,const std::string& userInputDef);
private:
	std::map<std::string, std::string> myDictionary;
};

#endif // !DICTIONARY_H