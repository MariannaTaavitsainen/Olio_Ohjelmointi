#include "wheel.h"

using namespace std;

Wheel::Wheel() {}

Wheel::Wheel(int s, string t)
{
    this->setSize(s);
    this->setType(t);

}

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int &newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(string &newType)
{
    type = newType;
}


