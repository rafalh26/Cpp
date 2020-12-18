#include <iostream>
#include <string>
using namespace std;

class Building
{
public:
	void setWindows(int numWindows)
	{
		this->numWindows = numWindows;
	}
	void setStories(int numStories)
	{
		this->numStories = numStories;
	}
	void setColor(string color)
	{
		this->color = color;
	}
	int getWindows() const
	{
		return numWindows;
	}
	int getStrories() const
	{
		return numStories;
	}
	string getColor() const
	{
		return color;
	}


private:
	string color = "";
	int numWindows = 0;
	int numStories = 0;
};

void printBuilding(Building newBuilding);

int main()
{
	Building building1;
	Building building2;
	Building building3;
	Building house;

	building1.setColor("redish"), building1.setStories(40), building1.setWindows(1000);
	building2.setColor("blue"), building2.setStories(20), building2.setWindows(400);
	building3.setColor("purple"), building3.setStories(10), building3.setWindows(100);
	house.setColor("white"), house.setStories(3), house.setWindows(10);

	printBuilding(house);
	printBuilding(building1);
	printBuilding(building3);
	printBuilding(building2);


	return 0;
}

void printBuilding(Building newBuilding)
{
	cout << newBuilding.getColor() << " building with " << newBuilding.getStrories() << " Stories and " << newBuilding.getWindows() << " windows\n";
}
