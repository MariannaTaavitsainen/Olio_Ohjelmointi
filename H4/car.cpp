#include "car.h"

#include <iostream>
#include <memory>

Car::Car() {}

Car::Car(string m, string b)
{
    this->setModel(m);
    this->setBrand(b);
}

void Car::setEngine(const Engine& e)
{
    objEngine = make_unique<Engine>(e);
}

void Car::setWheels(const Wheel w[4])
{
    objWheel1 = make_unique<Wheel>(w[0]);
    objWheel2 = make_unique<Wheel>(w[1]);
    objWheel3 = make_unique<Wheel>(w[2]);
    objWheel4 = make_unique<Wheel>(w[3]);
}

string Car::getModel()
{
    return model;
}

void Car::setModel(const string &m)
{
    model = m;
}

string Car::getBrand()
{
    return brand;
}

void Car::setBrand(const string &b)
{
    brand = b;
}

void Car::printDetails()
{
    cout << "Car: " << brand << model << endl;
    cout << "Engine: " << objEngine->getHorsepower() << " hp, "<< objEngine->getDisplacement() << " L" <<endl;
    cout << "Wheel1: " << objWheel1->getSize() << ", " << objWheel1->getType() << endl;
    cout << "Wheel2: " << objWheel2->getSize() << ", " << objWheel2->getType() << endl;
    cout << "Wheel3: " << objWheel3->getSize() << ", " << objWheel3->getType() << endl;
    cout << "Wheel4: " << objWheel4->getSize() << ", " << objWheel4->getType() << endl;
}
