#include "Dog.h"
#include <string>
#include <stdexcept>

using namespace std;

Dog::Dog(string breed)
{
	if (breed != "Poodle")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("Poodle? - Thats not a dog");
	}
}

string Dog::getBreed() const noexcept
{
	return breed;
}

