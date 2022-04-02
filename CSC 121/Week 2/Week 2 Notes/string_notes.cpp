/*

    String types

*/

#include <string>
#include <iostream>                                 // Functions for strings
#include <iomanip>

using namespace std;

int main()
{
    cout << "\n\tHello User! -- My name is \"Moksh Shah\"\n";

    string fName{ "Moksh" };                        // Declare and Initialize Name using strings
    string lName{ "S" };
    cout << setw(33) << fName << " " << lName;      // display default initialization

    cout << "\nEnter your first and last name";     // Prompt user & enter names
    cin >> fName >> lName;                          // using cin >>
    cout << setw(35) << fName << " " << lName;

    cout << "\n\t your first initial is " << fName[0] << " " << lName[0];


    return 0;
}