#include<string>
using namespace std;

class Building
{
public:

	void setWindows(int numWindows);
	void setStories(int numStories);
	void setColor(string color);

	int getWindows() const;
	int getStrories() const;
	string getColor() const;



private:
	string color = "";
	int numWindows = 0;
	int numStories = 0;
};
