#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QtDebug>

class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QObject *parent = nullptr);
    void virtual doThing() const =0;
    void virtual greetings() const = 0;

signals:

};

#endif // PERSON_H
