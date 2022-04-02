/*

    Exam 1      Question 10
    Moksh Shah  02/12/2022
    Input/Output Data Types IF Selection
    CSC 121

*/

#include <iostream>
#include <String>
using namespace std;

int main()
{
    string fName;
    string lName;

    cout << "Please enter your First name: ";
    cin >> fName;

    cout << "\nPlease enter your Last name: ";
    cin >> lName;

    int fSize = fName.length();
    int lSize = lName.length();
    int size = fSize - lSize;

    string fBet = fName.substr(0, 1);
    string lBet = lName.substr(0, 1);


    if(fSize > lSize)
    { 
        cout << "\nYour First Name which is " << fName << " is bigger than your last name " << lName << " by " << size << ".";
    }
    else
    {
        cout << "\nYour Last Name which is " << lName << " is bigger than your first name " << fName << " by " << size << ".";
    }

    if(fBet < lBet)
    {
        cout << "\nYour first name initial " << fBet << " come first alphabetically than your last name initial " << lBet << ".";
    }
    else
    {
        cout << "\nYour last name initial " << lBet << " come first alphabetically than your first name initial " << fBet << ".";
    }


    return 0;
}