#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Animal firstAnimal("cat",20.23);
	Dog myDog("lucy", 52.23, "german shepard");
	Animal* dogPtr = new Dog("Fiona", 34.12, "puddle");
	Animal* catPtr = new Cat("Kitten", 12.12);

	cout << catPtr->eat();
	//((Cat*)catPtr)->chaseMouse();
	(reinterpret_cast<Cat*>(catPtr))->chaseMouse();
	
	cout<<catPtr->makeNoise();

	//cout<<dogPtr->eat();
	//cout << "Make noise? \t" << dogPtr->makeNoise();

	/*cout << myDog.getName() << " weight " << myDog.getWeight() << "\n\t" <<myDog.makeNoise()<< myDog.getBreed() << endl;
	myDog.digHole();
	myDog.chaseCat();
	cout << firstAnimal.getName() << " weight " << firstAnimal.getWeight() << "\n\t" << firstAnimal.makeNoise() << endl;*/
	delete dogPtr;
	dogPtr = nullptr;
	delete catPtr;
	catPtr = nullptr;
	return 0;
}