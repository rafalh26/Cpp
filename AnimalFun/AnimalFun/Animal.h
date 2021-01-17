#ifndef ANIMAL_H
#define ANIMAL_H

#include<string>
#include<iostream>

using namespace std;

class Animal
{
public:
	Animal(string name, double weight);

	void setName(string name);
	void setWeight(double weight);

	string getName();
	double getWeight();
	string makeNoise();
private:
	string name = "";
	double weight = 0;
};

#endif // !ANIMAL_H
