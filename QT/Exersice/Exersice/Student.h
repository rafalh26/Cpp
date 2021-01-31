#pragma once

#include "Person.h"
#

class Student : public Person
{
	//Q_OBJECT

public:
	Student() : Person() {}
	~Student() {}

	void virtual doThings() const;
	void virtual greet() const;
};
