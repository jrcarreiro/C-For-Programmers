#include "Header.h"

int main(void)
{
    Shape sh1(4, 4); // Declare shape 1
    Shape sh2(2, 6); // Declare shape 2

    if (sh1.compare(sh2))
    {
	   cout << "\nShape 2 is smaller than Shape 1" << endl;
    }
    else
    {
	   cout << "\nShape 2 is equal to or larger than Shape 1" << endl;
    }

    if (sh1.compareWithThis(sh2))
    {
	   cout << "\nShape 2 is smaller than Shape 1" << endl;
    }
    else
    {
	   cout << "\nShape 2 is equal to or larger than Shape 1" << endl;
    }

    return 0;
}