#ifndef ALIEN_H
#define ALIEN_H

class Alien
{
public:
	Alien();
	Alien(int weight, int height, char gender);
	int getWeight() const;
	int getHeight() const;
	char getGender() const;
	int getPrestige() const;

	bool operator==(Alien& myAlien);

private:
	int weight;
	int height;
	char gender;
};

#endif // !ALIEN_H
