#include <iostream>

#include "Car.h"
#include "rectangle.h"
#include "Student.h"
#include <memory>                                               //smartpointeria (unique_ptr) varten

using namespace std;

int main(){
    Car auto1;                                                 //Luodaan olio pinomuistilla

    auto1.setBrand("Toyota");
    auto1.setModel("Corolla");
    auto1.setYearModel(2020);

    auto1.printData();
    cout << "******************************"<< endl;



    Rectangle* rect = new Rectangle();                         //Luodaan olio kekomuistilla
    rect->setWidth(3.5);
    rect->setHeight(5);

    rect->printData();

    delete rect;
    rect = nullptr;
    cout << "Rectanglen olio tuhottu"<< endl;
    cout << "******************************"<< endl;

    unique_ptr<Student> student = make_unique<Student>();       //Luodaan olio smartPointerilla
    student->setName("Olli Oppilas");
    student->setStudentNumber(46268);
    student->setAverage(4.65);


    cout<<"Opiskelijan nimi: " << student->getName() << endl;
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << "Keskiarvo" << student->getAverage() << endl;

    // unique_ptr tuhoaa olion automaattisesti kekomuistista(RAM:n yksi osio), ei tarvitse poistaa.

    cout << "******************************"<< endl;

    return 0;
}
