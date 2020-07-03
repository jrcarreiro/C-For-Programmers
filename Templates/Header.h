#include <iostream>

using namespace std;

//Our generic fucntion
template <typename T> //tell the compiler we are using a template
T findSmaller(T intput1, T input2);

template <typename T>
T findSmaller(T input1, T input2)
{
    if (input1 < input2)
    {
	   return input1;
    }
    else
	   return input2;
}