#include "Warrior.h"
#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

Warrior::Warrior(string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints) {}

void Warrior::Atack() const
{
	cout << "GRRR I'm Angry warrior rdy to fight!\n";
}