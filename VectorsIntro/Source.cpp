// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //creating a vector of integers
    vector<int> vectorsInts;
    cout << "vectorsInts has " << vectorsInts.size() << " elements" << endl;

    //Changing the size of vetorsInts to 6
    vectorsInts.resize(6);
    cout << "vectorsInts has " << vectorsInts.size() << " elements" << endl;
}