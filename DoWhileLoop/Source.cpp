#include <iostream>

using namespace std;

int main()
{
    int count = 0;

    do
    {
	   cout << "Count = " << count << endl;
	   count++;
    } while (count < 5);

    int otherCount = 6;

    do
    {
	   cout << "Other count = " << otherCount << endl;
	   otherCount++;
    } while (otherCount < 5);

    return 0;
}