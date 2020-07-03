#include "Header.h"

int main()
{
    int a = 5;
    int b = 4;
    float f1 = 5.43;
    float f2 = 6.32;
    char c1 = 'c';
    char c2 = 'z';

    cout << findSmallerInt(a, b) << " is the smaller of " << a << " and " << b << "\n";
    cout << findSmallerFloat(f1, f2) << " is the smaller of " << f1 << " and " << f2 << "\n";
    cout << findSmallerChar(c1, c2) << " is the smaller of " << c1 << " and " << c2 << "\n";

    return 0;
} 