#include "Mage.h"
#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

Mage::Mage(string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints) {}

void Mage::Atack() const
{
	cout << "GRRR I'm Angry mage and im rdy to fight!\n";
}