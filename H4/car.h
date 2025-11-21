#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <memory>

#include "engine.h"
#include "wheel.h"

using namespace std;

class Car
{
private:
    string model;
    string brand;
    unique_ptr<Engine> objEngine;
    unique_ptr<Wheel> objWheel1;
    unique_ptr<Wheel> objWheel2;
    unique_ptr<Wheel> objWheel3;
    unique_ptr<Wheel> objWheel4;
public:
    Car();
    Car(string m, string b);
    void setEngine(const Engine& e);
    void setWheels(const Wheel w[4]);
    string getModel();
    void setModel(const string &m);
    string getBrand();
    void setBrand(const string &b);
    void printDetails();
};


#endif // CAR_H
