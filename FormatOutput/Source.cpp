#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    cout << "\n\nThe text without any formating\n";
    cout << "Ints" << "Floats" << "Doubles" << "\n";
    cout << "\nThe text with setw(15)\n";
    cout << "Ints" << setw(15) << "Floats" << setw(15) << "Doubles" << "\n";
    cout << "\n\nThe text with tabs\n";
    cout << "Ints\t" << "Floats\t" << "Doubles" << "\n";

    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout << "The variables below in column" << endl;
    cout << "Ints\t" << "Floats\t" << "Doubles" << "\n";
    cout << a << "\t" << b << "\t" << c << endl;
    cout << aa << "\t" << bb << "\t" << cc << endl;
    cout << aaa << "\t" << bbb << "\t" << ccc << endl;

    return 0;
}