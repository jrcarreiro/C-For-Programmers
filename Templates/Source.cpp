#include "Header.h"

int main()
{
    int a = 54;
    int b = 89;
    float f1 = 7.8;
    float f2 = 9.1;
    char c1 = 'f';
    char c2 = 'h';
    string s1 = "Hello";
    string s2 = "Bots are fun";

    //Wow! We can use one function for different variable types
    cout << "\nIntegers compared: " << findSmaller(a, b);
    cout << "\nFloats compared: " << findSmaller(f1, f2);
    cout << "\nChars compared: " << findSmaller(c1, c2);
    cout << "\nStrings compared: " << findSmaller(s1, s2);
    return 0;
}