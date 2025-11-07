#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<iostream>



class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle();
    Rectangle(double w, double h);
    void setWidth(double w);
    void setHeight(double h);
    double getArea() const;
    double getCircum() const;
    void printData()const;

};

#endif // RECTANGLE_H
