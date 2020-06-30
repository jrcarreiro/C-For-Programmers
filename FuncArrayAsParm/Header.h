#include <iostream>
#include <iomanip>

using namespace std;

//Pass the array as a pointer
void arrayAsPointer(int* array, int size);
//Pass the array as a sized array
void arraySized(int array[3], int size);
//Pass the array as an unsized array
void arrayUnSized(int array[], int size);

void arrayAsPointer(int* array, int size)
{
    cout << setw(5);
    for (int i = 0; i < size; i++)
    {
	   cout << array[i] << " ";
	   cout << "\n";
    }
}

void arraySized(int array[3], int size)
{
    cout << setw(5);
    for (int i = 0; i < size; i++)
    {
	   cout << array[i] << " ";
	   cout << "\n";
    }
}

void arrayUnSized(int array[], int size)
{
    cout << setw(5);
    for (int i = 0; i < size; i++)
    {
	   cout << array[i] << " ";
	   cout << "\n";
    }
}