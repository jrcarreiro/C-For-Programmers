#include <iostream>
#include <string>

using namespace std;

int main()
{
    int year = 0;
    int age = 0;
    string name = " ";
    string userName;

    //cout << "What year is your favorite? ";
    //cin >> year;
    //cout << "How interesting, your favorite year is " << year << endl;
    //cout << endl;
    //cout << "At what age did you learn to ride a bike? ";
    //cin >> age;
    //cout << "How interesting you learned to ride at " << age << endl;
    //cout << endl;
    //cout << "What is your name? ";
    //cin >> name;
    //cout << "Hello " << name << endl;
    //cout << endl;

    cout << "Tell me your nickname? ";
    getline(cin, userName);
    cout << "Hello " << userName << "\n";

    return 0;
}