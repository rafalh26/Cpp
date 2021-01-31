#pragma once

#include <QObject>
#include <qdebug.h>

class Person : public QObject
{
public:
	explicit Person(QObject * parent = 0);
	~Person();

	void virtual doThings() const = 0;
	void virtual greet() const = 0;

};
