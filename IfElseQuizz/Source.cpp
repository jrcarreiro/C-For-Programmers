#include <iostream>

using namespace std;

int main()
{
    char skin, location;
    cout << "Would you like an animal with fur(f), feathers(t), or scales(s)?";
    cin >> skin;
    cout << skin << endl;

    //Use if-else statements to control program flow

    if (skin == 'f')
    {
	   cout << "Get a dog" << endl;
    }
    else if (skin == 't')
    {
	   cout << "Get a bird" << endl;
    }
    else if (skin == 's')
    {
	   cout << "Would you like an animal that lives in water(w), land(l), or both(b)?";
	   cin >> location;
	   cout << location << endl;

        if (location == 'w')
            cout << "Get a fish" << endl;
        else if (location == 'l')
            cout << "Get a gecko" << endl;
        else if (location == 'b')
            cout << "Get a frog" << endl;
        else
            cout << "Enter water(w), land(l), or both(b)" << endl;
    }
    else
    {
        cout << "Please choose fur(f), feathers(t), scales(s)" << endl;
        return 0;
    }

}