#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Toyota", "Verso", 2007));
    carList.push_back(Car("Nissan", "Micra", 2012));
    carList.push_back(Car("Volvo", "V90", 2021));

    cout << "Toisen auton tiedot: " << endl;
    carList[1].printData();
    cout << "***************************" << endl;


    cout << "Kaikkien autojen tiedot: " << endl;

    for(int i=0; i<carList.size(); i++){
        carList[i].printData();
        cout << "***************************" << endl;
    }

    return 0;
}
