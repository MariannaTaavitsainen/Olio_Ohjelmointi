#include "italianchef.h"

using namespace std;



ItalianChef::ItalianChef(std::string n) : Chef(n) {
    cout << "ItalianChef " << name << "konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << name << "destruktori" << endl;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef " << name << "makes pasta" << endl;

}

string ItalianChef::getName()
{
    return name;
}
