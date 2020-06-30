#include <iostream>
using namespace std;

int search(int array[], int size, int searchKey);

int search(int array[], int size, int searchKey)
{
    int found = -1;
    for (int i = 0; i < size; i++)
    {
	   if (array[i] == searchKey)
	   {
		  found = i;
	   }
    }
    return found;
}
