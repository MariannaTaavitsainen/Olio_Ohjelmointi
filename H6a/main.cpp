#include <iostream>
#include <QCoreApplication>
#include "myclass.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass obj;
    obj.raiseMySignal();

    return a.exec();
}
