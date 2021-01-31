#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person
{
    Q_OBJECT
public:
    Student();
    void doThing() const
    {
        qInfo()<<"Im buying books";
    }
    void greetings() const
    {
        qInfo("hello");
    }

};

#endif // STUDENT_H
