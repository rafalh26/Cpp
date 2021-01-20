#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"
#include <iostream>
#include <vector>

using namespace std;

vector<Player*> charactersCreated;

void makeCharacter();
void displayCharacters();
void cleanUp();

int main()
{
	makeCharacter();
	displayCharacters();
	//display all characters made using either func or vector inside main
	//Cleaner called
	cleanUp();

	return 0;
}

void makeCharacter()
{
MainMenu:

	cout << "Welcome to character creation\n";
	int inputMM = 0;
	int inputRM = 0;
	string inputName = "";
	cout << "Choose Ur Class:\n";
	cout << "1.) Warrior\n";
	cout << "2.) Priest\n";
	cout << "3.) Mage\n";
	cout << "0.) end of creation characters\n";
	cout << "\nWhat's Ur choice?:\t";
	cin >> inputMM;
	if ((inputMM < 0) || (inputMM > 3))
	{
		cout << "Wrong choice - choose again\n";
		goto MainMenu;
	}
	else if (inputMM == 0)
	{
		return;
	}


RaceMenu:
	cout << "Choose Ur Race:\n";
	cout << "1.) HUMAN\n";
	cout << "2.) ELF\n";
	cout << "3.) DWARF\n";
	cout << "4.) ORC\n";
	cout << "5.) TROLL\n";
	cout << "\nWhat's Ur choice?:\t";
	cin >> inputRM;

	if (inputMM < 1 || inputRM>5)
	{
		goto RaceMenu;
	}
	inputRM--;

NameSection:
	cout << "Name Ur character U just creating:\n";
	cin >> inputName;
	
	
	// storing created char inside vector //
	if (inputMM == 1)
	{
		Warrior* newWarrior = new Warrior(inputName, (Race)inputRM, 200, 0);
		charactersCreated.push_back(newWarrior);
	}
	else if (inputMM == 2)
	{
		Priest* newPriest = new Priest(inputName, (Race)inputRM, 100, 200);
		charactersCreated.push_back(newPriest);
	}
	else if (inputMM == 3)
	{
		Mage* newMage = new Mage(inputName, (Race)inputRM, 150, 150);
		charactersCreated.push_back(newMage);
	}
	else
	{
		cout << "WTF are U trying to do idiot !";
	}
	
	
	goto MainMenu;
}
void displayCharacters()
{
	for (unsigned int i = 0; i < charactersCreated.size(); i++)
	{
		cout << charactersCreated.at(i)->getName() << " is " << charactersCreated.at(i)->whatRace()<<" ";
		cout << endl;
		charactersCreated.at(i)->Atack();
		cout << "And here are my stats" << endl;
		cout << "HP: " << charactersCreated.at(i)->getHP() << endl;
		cout << "MP: " << charactersCreated.at(i)->getMP() << endl;

		cout << endl << endl;
	}
}
void cleanUp()
{
	for (auto i : charactersCreated)
	{
		delete i;
	}
}