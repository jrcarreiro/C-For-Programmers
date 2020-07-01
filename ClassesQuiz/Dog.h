#include <iostream>
using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    void setName(string nameIn);
    void setLicenseNumber(int linceseNumberIn);
    string getName();
    int getLicenseName();
    void printInfo();
};

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseName()
{
    return licenseNumber;
}

void Dog::printInfo()
{
    cout << name << " " << licenseNumber;
} 

