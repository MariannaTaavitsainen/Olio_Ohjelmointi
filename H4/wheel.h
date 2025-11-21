#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>
#include <memory>

using namespace std;

class Wheel
{
private:
    int size;
    string type;
public:
    Wheel();
    Wheel(int s, string t);
    int getSize() const;
    void setSize(int &newGetsize);
    string getType() const;
    void setType(string &newGettype);

};

#endif // WHEEL_H
