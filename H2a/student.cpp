#include "student.h"

using namespace std;

Student::Student() {
    name = "";
    studentNumber = 0;
    average = 0.0;
}

void Student::setName(const string &newName)
{
    name = newName;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

string Student::getName() const
{
    return name;
}

int Student::getStudentNumber()
{
    return studentNumber;
}

double Student::getAverage()
{
    return average;
}

