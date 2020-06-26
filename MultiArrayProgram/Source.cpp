/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/
#include <iostream>

using namespace std;

int main()
{
    const int row = 4;
    const int col = 4;

    int arr[row][col];
    int vector[row], product[row];
    sum;

    for (int i = 0; i < row; i++)
    {
	   for (int j = 0; j < row; j++)
	   {
		  cout << "arr[" << i << "][" << j << "] = \n";
		  cin >> arr[i][j];
	   }
    }
    for (int i = 0; i < row; i++)
    {
	   cout << "vector[" << i << "] = \n";
	   cin >> vector[i];
    }
    sum = 0;

    for (int i = 0; i < row; i++)
    {
	   for (int j = 0; j < row; j++)
	   {
		  sum = (arr[i][j] * vector[i]) + sum;
	   }
	   product[i] = sum;
	   sum = 0;
    }

    for (int i = 0; i < row; i++)
    {
	   cout << "product[" << i << "] = " << product[i] << "\n";
    }
    return 0;
}