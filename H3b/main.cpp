#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    Animal* a = new Animal();
    a->callOut();

    Animal* d = new Dog();
    d->callOut();


    delete a;
    delete d;

    return 0;
}
