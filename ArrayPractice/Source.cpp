#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int userIntput[40];

    //Enter the numbers into an array called userInput
    for (int i = 0; i < 40; i++)
    {
	   scanf_s("%d", &userIntput[i]);
    }
    //print the array
    cout << "\nThe array\n";
    for (int i = 0; i < 40; i++)
    {
	   cout << userIntput[i] << " ";
    }
    //Print the array in reverse order
    cout << "\n\nThe array in reverse order\n";
    for (int i = 39; i >= 0; i--)
    {
	   cout << userIntput[i] << " ";
    }
    //sorting the array
    for (int i = 0; i < 40; i++)
    {
	   for (int j = 0; j < 39 - i; j++)
	   {
		  if (userIntput[j] > userIntput[j + 1])
		  {
			 int temp;
			 temp = userIntput[j];
			 userIntput[j] = userIntput[j + 1];
			 userIntput[j + 1] = temp;
		  }
	   }
    }
    cout << "\n\nThe array sorted\n";
    for (int i = 0; i < 40; i++)
    {
	   cout << userIntput[i] << " ";
    }
    return 0;
}