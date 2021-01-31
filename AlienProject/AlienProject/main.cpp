#include "Alien.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int randomizer();

int main()
{
	vector<unique_ptr<Alien>> myAliens;
	unique_ptr<Alien> alien1(make_unique<Alien>(300, 200, 'M'));
	unique_ptr<Alien> alien2(make_unique<Alien>(300, 200, 'M'));

	/*conversion to regular objects*/
	cout << alien1 << " is equl to " << alien2 << "??" << endl;
	Alien tmpAlien1, tmpAlien2;
	tmpAlien1 = *alien1;
	tmpAlien2 = *alien2;
	bool result = tmpAlien1 == tmpAlien2;
	cout << result << endl;
	myAliens.push_back(move(alien1));
	myAliens.push_back(move(alien2));

	cout << endl << endl;
	cout << myAliens[0] << endl <<myAliens[1];
	
	cout << randomizer() << endl;
	
	return 0;
}

int randomizer()
{
	srand((unsigned)time(0));
	int random = 0;
	random = (rand() % 100) + 0;
	return random;
}


