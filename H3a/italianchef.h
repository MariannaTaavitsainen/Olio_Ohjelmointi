#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <iostream>

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string n);
    ~ItalianChef();

    void makePasta();
    std::string getName();
};

#endif // ITALIANCHEF_H
