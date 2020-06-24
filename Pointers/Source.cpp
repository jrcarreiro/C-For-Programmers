#include <iostream>

using namespace std;

int main()
{
    int a = 54;
    cout << "a =" << a << endl;
    cout << "Address of a is at &a = " << &a << endl;
    "\n";
    int* pointerToA = &a;
    cout << "poiterToA stores " << pointerToA << endl;
    cout << "pointerToA points to " << *pointerToA << endl;
    
    return 0;
}