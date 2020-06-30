#include "Header.h"

int main()
{
    const int size = 4;
    int array[] = { 345,75896,543 };
    int searchKey = 543;
    cout << "Found at: " << search(array, size, searchKey);
    return 0;
}