#ifndef BUILDING_H
#define BUILDING_H
#include<string>
using namespace std;

class Building
{
public:

	
	Building(int numStories, int numWindows, string color);
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
	string color = "default";
	int numWindows = 999;
	int numStories = 999;
};

#endif