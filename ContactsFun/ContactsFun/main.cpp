#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, string> constacts;

	constacts["John B."] = "313-555-5555";
	constacts["Bob Robinson"] = "734-555-5050";
	constacts["Sally Snorkle"] = "810-555-8888";

	for (pair<string, string> element : constacts)
	{
		cout << element.first << " = " << element.second << endl;
	}
}