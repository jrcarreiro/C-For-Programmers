#include <iostream>

using namespace std;

int main()
{
    int entry = 0;

    while (entry <= 5)
    {
	   cout << "Incrementing entry = " << entry << endl;
	   entry++;
    }

    while (entry < 5)
    {
	   cout << "Decrementing entry = " << entry << endl;
	   entry--;
    }

    return 0;
}