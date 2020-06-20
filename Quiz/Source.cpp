#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;

    ofstream myFileI("input.txt", ios::app);
    if (myFileI.is_open())
    {
	   myFileI << "\nI am adding a line.\n";
	   myFileI << "I am adding another line.\n";
	   myFileI.close();
    }

    else cout << "Unable to open file for writing";

    ifstream myFileO("input.txt");

    if (myFileO.is_open())
    {
	   while (getline(myFileO, line))
	   {
		  cout << line << endl;
	   }
	   myFileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}