#include "Priest.h"
#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

Priest::Priest(string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints) {}

void Priest::Atack() const
{
	cout << "GRRR I'm Angry priest and im rdy to fight!\n";
}