#ifndef LIST_H
#define LIST_H

#include <vector>
#include <string>

using namespace std;

class List {
public:
	int getSize();
	void setName(string &name,int &whileCounter);
	void printData();
private:
	vector<string> names;
	vector<int> counters;
};

#endif