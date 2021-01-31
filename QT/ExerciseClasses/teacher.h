#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

class Teacher : public Person
{
    Q_OBJECT
public:
    Teacher();
    void doThing() const
    {
        qInfo()<<"Im teaching";
    }
    void greetings() const
    {
        qInfo("hello im ur prof J.K.");
    }

};

#endif // TEACHER_H
