#include "animal.h"

using namespace std;

Animal::Animal() {}

void Animal::callOut()
{
    cout << "Elain aantelee." << endl;
}

Animal::~Animal()
{
    cout << "Animal tuhoutuu." << endl;
}
