#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
public:
	//constr
	Player(string name, RACE race, int hitPoints, int magicPoints);
	
	//setters
	void setName(string name);
	void setRace(RACE race);
	void setHP(int hitPoints);
	void setMP(int magicPoints);

	//getters
	string getname() const;
	RACE getRace() const;
	string whatRace() const;
	int getHP() const;
	int getMP() const;
	
	//abstraction class method
	void virtual Atack() const = 0;
private:
	RACE race;
	string name;
	int hitPoints, magicPoints;
};


enum RACE {};


#endif // !PLAYER_H