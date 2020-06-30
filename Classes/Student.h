#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    int id;
    int gradDate;

public:
    void setName(string name);
    void setId(int idIn);
    void setGradDate(int dateIn);
    string getName();
    int getId();
    int getGradDate();
    void print();
};

void Student::setName(string nameIn)
{
    name = nameIn;
}

void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
    gradDate = gradDateIn;
}

string Student::getName()
{
    return name;
}

void Student::print()
{
    cout << name << " " << id << " " << gradDate;
}

int Student::getId()
{
    return id;
}

int Student::getGradDate()
{
    return gradDate;
}
