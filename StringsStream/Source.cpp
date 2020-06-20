/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string stringLength, stringWidth;
    float length = 0;
    float width = 0;
    float area = 0;

    cout << "Enter the length of the room: ";
    getline(cin, stringLength);
    stringstream(stringLength) >> length;

    cout << "Enter width: ";
    getline(cin, stringWidth);
    stringstream(stringWidth) >> width;

    area = length * width;
    cout << "\nThe area of the room is: " << area << endl;

    return 0;
}














//#include <iostream>
//#include <string>
//#include <sstream>
//
//using namespace std;

//int main()
//{
//    string stringLenth;
//    float inches = 0;
//    float yardage = 0;
//
//    cout << "Enter numeber of inches: ";
//    getline(cin, stringLenth);
//    stringstream(stringLenth) >> inches;
//    cout << "You entered " << inches << endl;
//    yardage = inches / 36;
//    cout << "Yardage is " << yardage;
//
//    return 0;
//}