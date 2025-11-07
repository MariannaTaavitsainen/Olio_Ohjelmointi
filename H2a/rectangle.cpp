#include "rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle() {
    width = 0.0;
    height= 0.0;
}

Rectangle::Rectangle(double w, double h){
    width = w;
    height= h;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setHeight(double h)
{
    height = h;
}
double Rectangle::getArea() const
{
    return width*height;
}

double Rectangle::getCircum() const
{
    return 2*(width+height);
}

void Rectangle::printData()const{
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << getArea() << endl;
    cout << "Circum: " << getCircum() << endl;

}

