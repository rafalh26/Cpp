#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"
#include <string>

using namespace std;

class Warrior : public Player
{
public:
	Warrior(string name, Race race, int hitPoints, int magicPoints);

	void Atack() const;
};

#endif // !WARRIOR_H