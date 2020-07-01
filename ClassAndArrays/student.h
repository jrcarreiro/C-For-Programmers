#include <iostream>
using namespace std;

class Student
{
    int grade[5];
    int id;
public:
    Student();
    void setId(int idIn);
    void setGrade(int index, int gradeIn);
    int getId();
    int getGrade(int index);
    int getAvg();
    void printInfo();
};

Student::Student()
{
    for (int i = 0; i < 5; i++)
    {
	   grade[i] = 0;
    }
    id = 0;
}

void Student::setId(int idIn)
{
    id = idIn;
}

void Student::setGrade(int index, int gradeIn)
{
    grade[index] = gradeIn;
}

int Student::getId()
{
    return id;
}

int Student::getGrade(int index)
{
    return grade[index];
}

int Student::getAvg()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
	   sum = sum + grade[i];

    }
    
    return sum / 5.0;
}

void Student::printInfo()
{
    cout << id << endl;
    for (int i = 0; i < 5; i++)
    {
	   cout << grade[i] << " ";
    }
}