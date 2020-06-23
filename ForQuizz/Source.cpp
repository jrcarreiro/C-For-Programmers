#include <iostream>

using namespace std;

int main()
{
    float input;
    float sum = 0;

    for (int i = 0; i < 5; i++)
    {
	   cout << "What is the next number? " << endl;
	   cin >> input;
	   sum = sum + input;
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << sum / 5 << endl;

    return 0;
}