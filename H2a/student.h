#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int studentNumber;
    double average;
public:
    Student();
    void setName(const string &newName);
    void setStudentNumber(int newStudentNumber);
    void setAverage(double newAverage);

    string getName() const;
    int getStudentNumber();
    double getAverage();
};

#endif // STUDENT_H
