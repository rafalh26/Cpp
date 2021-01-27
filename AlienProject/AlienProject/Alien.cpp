#include "Alien.h"
#include <memory>

using namespace std;

Alien::Alien()
{}
Alien::Alien(int weight, int height, char gender)
{
	this->weight = weight;
	this->height = height;
	this->gender = gender;
}

int Alien::getWeight() const
{
	return weight;
}
int Alien::getHeight() const
{
	return height;
}
char Alien::getGender() const
{
	return gender;
}
int Alien::getPrestige() const
{
	int prestige = 0;

	int genderPoints = 0;
	if (gender == 'M')
	{
		genderPoints = 2;
	}
	else if (gender == 'F')
	{
		genderPoints = 3;
	}
	prestige = height * weight * genderPoints;
	return prestige;
}

bool Alien::operator==(Alien& myAlien)
{
	return getPrestige() == myAlien.getPrestige();
}