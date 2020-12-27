#ifndef DOG_H
#define DOG_H

#include <stdexcept>
#include <iostream>

using namespace std;

class Dog
{
public:
	Dog(string breed);

	string getBreed() const noexcept;
private:
	string breed;
};

#endif // !DOG_H
