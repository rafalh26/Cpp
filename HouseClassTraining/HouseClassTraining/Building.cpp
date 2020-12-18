#include "Building.h"

	void Building::setWindows(int numWindows)
	{
		this->numWindows = numWindows;
	}
	void Building::setStories(int numStories)
	{
		this->numStories = numStories;
	}
	void Building::setColor(string color)
	{
		this->color = color;
	}
	int Building::getWindows() const
	{
		return numWindows;
	}
	int Building::getStrories() const
	{
		return numStories;
	}
	string Building::getColor() const
	{
		return color;
	}