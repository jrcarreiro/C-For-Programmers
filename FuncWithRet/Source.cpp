#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    float m1 = 4.0;
    float m2 = 3.5;
    float answer;

    answer = add(m1, m2);
    cout << m1 << "+" << m2 << " = " << answer << endl;

    cout << m1 << "-" << m2 << " = " << sub(m1, m2) << endl;
    cout << m1 << "*" << m2 << " = " << mult(m1, m2) << endl;
    cout << m1 << "/" << m2 << " = " << div(m1, m2) << endl;
    return 0;
}
