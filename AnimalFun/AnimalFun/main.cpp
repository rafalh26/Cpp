#include "Animal.h"
#include "Dog.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Animal firstAnimal("cat",20.23);
	Dog myDog("lucy", 52.23, "german shepard");
	cout << myDog.getName() << " weight " << myDog.getWeight() << "\n\t" <<myDog.makeNoise()<< myDog.getBreed() << endl;
	myDog.digHole();
	myDog.chaseCat();
	cout << firstAnimal.getName() << " weight " << firstAnimal.getWeight() << "\n\t" << firstAnimal.makeNoise() << endl;
	return 0;
}