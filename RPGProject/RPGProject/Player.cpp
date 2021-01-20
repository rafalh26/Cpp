#include "Player.h"

using namespace std;
//constr
Player::Player(string name, Race race, int hitPoints, int magicPoints)
{
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}
//setters
void Player::setName(string name)
{
	this->name = name;
}
void Player::setRace(Race race)
{
	this->race = race;
}
void Player::setHP(int hitPoints)
{
	this->hitPoints = hitPoints;
}
void Player::setMP(int magicPoints)
{
	this->magicPoints = magicPoints;
}

//getters
string Player::getName() const
{
	return name;
}
Race Player::getRace() const
{
	return race;
}
string Player::whatRace() const
{
	string output = "";

	switch (race)
	{
	case 0:
		output = "HUMAN";
		break;
	case 1:
		output = "ELF";
		break;
	case 2:
		output = "DWARF";
		break;
	case 3:
		output = "ORC";
		break;
	case 4:
		output = "TROLL";
		break;
	}

	return output;
}
int Player::getHP() const
{
	return hitPoints;
}
int Player::getMP() const
{
	return magicPoints;
}