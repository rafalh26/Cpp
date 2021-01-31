#include "Person.h"

Person::Person(QObject * parent) : QObject(parent)
{
	qInfo() << "constructed " << this;
}
Person::~Person() {}

void Person::doThings() const {}
