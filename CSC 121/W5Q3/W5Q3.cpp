/*

    Week 5      Discussion Question 3
    Moksh Shah  02-17-2022
    Bubble Sort
    CSC 121

*/

#include <iostream>                                                                                                     // iostream library
#include <string>                                                                                                       // string library
using namespace std;                                                                                                    // namespace for std

string fName, lName, fullName;                                                                                          // string variable for first name, last name, and full name


int main()
{
    char temp;                                                                                                          // character variable to store temporary character

    cout << "\nPlease enter your first name: ";                                                                         // prompt to enter first name
    cin >> fName;                                                                                                       // store first name

    cout << "\nPlease enter your last name: ";                                                                          // prompt to enter your last name
    cin >> lName;                                                                                                       // store last name 
    
    fullName = fName + lName;                                                                                           // add first name and last name to make full name
    
    
    for (int i = 1; i <= fullName.length(); i++)                                                                        // for loop to sort alphabetically
    {
        for (int j = 0; j < fullName.length() - 1; j++)                                                                 
        {
            if (fullName[j] > fullName[j + 1])
            {
                temp = fullName[j];
                fullName[j] = fullName[j + 1];
                fullName[j + 1] = temp;
            }
        }
    }

    cout << "\nThanks for entering your name :)\n";

    for (int m = 0; m < fName.length(); m++)                                                                             // for loop to print alphabetically sorted name
    {
        cout << fullName[m] << endl;
    }
    
    
    return 0;
}