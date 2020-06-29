#include <iostream>
using namespace std;

void calculate(float int1, float int2, char op, float& ans);
void printEquation(float input1, float input2, char operation, float result);

void calculate(float int1, float int2, char op, float& ans)
{
    switch (op)
    {
    case '+': ans = int1 + int2;
	   break;
    case '-': ans = int1 + int2;
	   break;
    case '*': ans = int1 + int2;
	   break;
    case '/': ans = int1 + int2;
	   break;
    default: cout << "Illegal operation" << endl;
    }
}

void printEquation(float input1, float input2, char operation, float result)
{
    cout << input1 << " " << operation << " " << input2 << " = " << result << endl;
}