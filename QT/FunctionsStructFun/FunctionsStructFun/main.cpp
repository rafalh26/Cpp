#include <QtCore/QCoreApplication>
#include <iostream>
#include <string>

int myInput();
void output(int &myInput);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int result = myInput();
    output(result);

    return a.exec();
}

int myInput()
{
    int myInput = 0;
    qInfo("Enter maximum");
    std::cin >> myInput;
    return myInput;
}
void output(int &myInput)
{
    for (int i = 1; i <= myInput; i++)
    {
        std::cout << "welcome time:" << i << std::endl;
    }
}