#include "Student.h"

int main()
{
    int integer1;
    float float1;
    Student student1;

    integer1 = 4;
    float1 = 4.333;
    student1.setName("Junior Carreiro");
    student1.setId(54345);
    student1.setGradDate(2017);

    cout << " integer1 = " << integer1 << endl;
    cout << " float1 = " << float1 << endl << endl;
    
    cout << "Using the Student::print function" << endl;
    cout << "Student1 = ";
    student1.print();
    cout << endl << endl;

    cout << "Using the student access fuctions \n";
    cout << "Student1 name = " << student1.getName() << endl;
    cout << "Student1 ID = " << student1.getId()<< endl;
    cout << "Student1 Grade Date = " << student1.getGradDate() << endl;

    return 0;
}
