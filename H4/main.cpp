#include <iostream>

#include "car.h"
#include "engine.h"
#include "wheel.h"

using namespace std;

int main()
{
    Car car("Toyota", "Corolla ");

    Engine e(180, 2.0);
    car.setEngine(e);

    Wheel wheels[4] {
        Wheel (17, "Summer"),
        Wheel (17, "Summer"),
        Wheel (17, "Summer"),
        Wheel (17, "Summer")
    };

    car.setWheels(wheels);
    car.printDetails();

    return 0;
}
