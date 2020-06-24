#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int target = 55;
    string userString;
    int guess = -1;

    while (guess != target)
    {
	   cout << "Guess a number between 0 and 100: ";
	   cin >> guess;
	   cout << guess << endl;
	   if (guess > target)
		  cout << "Your target is too high" << endl;
	   else if (guess < target)
		  cout << "Your guess is low" << endl;
	   else
		  cout << "You guessed the target!" << endl;

	   if (guess == -1)
	   {
		  cout << "Good Bye!";
		  break;
    }

    }

    return 0;
}