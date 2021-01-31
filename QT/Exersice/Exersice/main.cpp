#include <QtCore/QCoreApplication>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Teacher myTeacher;
    myTeacher.greet();
    Student myStudent;
    myStudent.greet();

    myTeacher.doThings();
    myStudent.doThings();

    return a.exec();
}