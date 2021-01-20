#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

enum Race { HUMAN, ELF, DWARF, ORC, TROLL };

class Player
{
public:
	//constr
	Player(string name, Race race, int hitPoints, int magicPoints);
	
	//setters
	void setName(string name);
	void setRace(Race race);
	void setHP(int hitPoints);
	void setMP(int magicPoints);

	//getters
	string getName() const;
	Race getRace() const;
	string whatRace() const;
	int getHP() const;
	int getMP() const;
	
	//abstraction class method
	void virtual Atack() const = 0;
private:
	Race race;
	string name;
	int hitPoints, magicPoints;
};
#endif // !PLAYER_H