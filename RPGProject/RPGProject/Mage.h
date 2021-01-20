#ifndef MAGE_H
#define MAGE_H

#include "Player.h"
#include <string>

using namespace std;

class Mage : public Player
{
public:
	Mage(string name, Race race, int hitPoints, int magicPoints);

	void Atack() const;
};

#endif // !MAGE_H
