#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, address, phone;
    int i;

        for (i = 0; i < 2; i++)
    {
        cout << "What is your name? ";
        getline(cin, name);
        
        cout << "What is your address? ";
        getline(cin, address);
        
        cout << "What is your phone number? "; 
        getline(cin, phone);
        cout << endl;
        
        cout << "\n\n" << name << "\n";
        cout << "\t\t" << address << "\n";
        cout << "\t\t" << phone << endl;
        cout << endl;
    }

    return 0;
     
}