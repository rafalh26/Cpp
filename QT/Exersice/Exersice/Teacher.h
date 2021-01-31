#pragma once
#include "Person.h"
#include <QObject>

class Teacher : public Person
{
	//Q_OBJECT

public:
	Teacher() : Person() {}
	~Teacher() {}

	void virtual doThings() const;
	void virtual greet() const;
};
