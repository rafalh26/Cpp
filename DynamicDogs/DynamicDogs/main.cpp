#include "Dog.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Dog* myDogPtr = new Dog("Rover", "German Shepherd");
	Dog* yourDogPtr = new Dog("Tim", "Beagle");

	cout << "using arrow:\n";
	cout << myDogPtr->getName() << " is " << myDogPtr->getBreed() << endl;	
	cout << yourDogPtr->getName() << " is " << yourDogPtr->getBreed() << endl;

	cout << "using * dereference:\n";
	cout << (*myDogPtr).getName() << " is " << (*myDogPtr).getBreed()<<endl;
	cout << (*yourDogPtr).getName() << " is " << (*yourDogPtr).getBreed() << endl;

	delete myDogPtr;
	delete yourDogPtr;

	myDogPtr = nullptr;
	yourDogPtr = nullptr;
	return 0;
}