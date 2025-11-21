#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <memory>

using namespace std;

class Engine
{
private:
    int horsepower;
    double displacement;
public:
    Engine();
    Engine(int hp, double d);
    int getHorsepower() const;
    void setHorsepower(int newHorsepower);
    double getDisplacement() const;
    void setDisplacement(double newDisplacement);
};

#endif // ENGINE_H
