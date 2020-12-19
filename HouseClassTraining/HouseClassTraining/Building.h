#ifndef BUILDING_H
#define BUILDING_H
#include<string>
using namespace std;

class Building
{
public:

	Building();
	~Building();
	
	void setNumStories(int numStories);
	void setColor(string color);
	void setNumWindows(int numWindows);

	int getNumStories();
	int getNumWindows();
	string getColor();

	void print();

private:
	string color = "";
	int numWindows = 0;
	int numStories = 0;
};

#endif