#include <iostream>
using namespace std;

int findSmallerInt(int input1, int input2);
float findSmallerFloat(float input1, float input2);
char findSmallerChar(char input1, char input2);

int findSmallerInt(int input1, int input2)
{
    if (input1 < input2)
    {
	   return input1;
    }
    return input2;
}

float findSmallerFloat(float input1, float input2)
{
    if (input1 < input2)
    {
	   return input1;
    }
    return input2;
}

char findSmallerChar(char input1, char input2)
{
    if (input1 < input2)
    {
	   return input1;
    }
    return input2;
}