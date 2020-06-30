#include "Header.h"

int main()
{
    const int size = 3;
    int array[size] = { 33,66,99 };
    //We are passing a pointer or reference to the array
    //So we will not know the size of the array
    //We have to pass the size to the function as well
    arrayAsPointer(array, size);
    arraySized(array, size);
    arrayUnSized(array, size);
    return 0;
}