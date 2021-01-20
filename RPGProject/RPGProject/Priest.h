#ifndef PRIEST_H
#define PRIEST_H
#include "Player.h"
#include <string>

using namespace std;

class Priest : public Player
{
public:
	Priest(string name, Race race, int hitPoints, int magicPoints);

	void Atack() const;
};

#endif // !PRIEST_H

