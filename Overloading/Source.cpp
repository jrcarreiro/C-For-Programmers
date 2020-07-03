#include "Header.h"

int main()
{
    int a = 5;
    int b = 4;
    float f1 = 5.43;
    float f2 = 6.32;
    char c1 = 'c';
    char c2 = 'z';

    cout << findSmaller(a, b) << " is the smaller of " << a << " and " << b << "\n";
    cout << findSmaller(f1, f2) << " is the smaller of " << f1 << " and " << f2 << "\n";
    cout << findSmaller(c1, c2) << " is the smaller of " << c1 << " and " << c2 << "\n";

    return 0;
} 