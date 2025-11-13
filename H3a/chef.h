#ifndef CHEF_H
#define CHEF_H

#include <iostream>

class Chef
{
protected:
    std::string name;

public:
    Chef(std::string n);
    ~Chef();

    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
