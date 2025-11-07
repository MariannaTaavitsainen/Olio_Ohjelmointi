#include "car.h"
using namespace std;

void Car::printData()const{
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Vuosimalli: " << yearModel << endl;
}
void Car::setBrand(const string &newBrand){
    brand = newBrand;
}

void Car::setModel(const string &newModel){
    model = newModel;
}

void Car::setYearModel(int newYearModel){
    yearModel = newYearModel;
}

