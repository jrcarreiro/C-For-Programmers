#include <iostream>

using namespace std;

int main()
{
    int TARGET = 33;
    int guess;
    cout << "Guess a number between 0 - 100: ";
    cin >> guess; 

    cout << "You guessed " << guess << endl;

    if (guess < TARGET)
    {
	   cout << "Your guess is too low.\n";
    }
    else if (guess > TARGET)
    {
	   cout << "Your guess is too high.\n";
    }
    else
    {
	   cout << "Yay! You guessed correctly.\n";
    }

    return 0;
}