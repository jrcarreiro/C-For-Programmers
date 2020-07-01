#include "cat.h"

int main()
{
    Cat cat1, cat2;
    cat1.setName("Opa");
    cat1.setBreed("Sopa");
    cat1.setAge(5);
    cat2.setName("Jose");
    cat2.setBreed("main coo");
    cat2.setAge(1);

    //cat1.printInfo();
    //cout << endl;
    //cat2.printInfo();
    //cout << endl << endl;

    //Alternate printing method
    cout << cat1.getName() << " " << cat1.getBreed() << " " << cat1.getAge() << endl;
    cout << cat2.getName() << " " << cat2.getBreed() << " " << cat2.getAge() << endl;

    return 0;
}
