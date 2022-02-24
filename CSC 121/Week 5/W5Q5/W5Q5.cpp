/*

    Week 5      Discussion Question 5
    Moksh Shah  02-18-2022
    What's in a Name
    CSC 121

*/

#include <iostream>                                                                                                                                 // iostream library
#include <unistd.h>                                                                                                                                 // universal operating header
using namespace std;                                                                                                                                // namespace for std

int main()
{
    string fName, lName, fullName;                                                                                                                  // variable string for first name, last name, and full name

    cout << "\nPlease enter your first name: ";                                                                                                     // prompt for first name
    cin >> fName;                                                                                                                                   // store first name

    cout << "\nPlease enter your last name: ";                                                                                                      // prompt for last name
    cin >> lName;                                                                                                                                   // store last name

    fullName = fName + lName;                                                                                                                       // combines first name and last name to create a full name
    transform(fullName.begin(), fullName.end(), fullName.begin(), ::tolower);                                                                       // transform full name to lowercase (transform(str.begin(), str.end(), str.begin(), ::(choice of case)))

    cout << "\nLets check if you have any vowels in your name.\n\n";                                                                                

    for(int i = 0; i < fullName.length(); i++)                                                                                                      // for loop to check for any vowels
    {
        usleep(1000000);                                                                                                                            // wait for 1s

        if(fullName[i] == 'a' || fullName[i] == 'e' || fullName[i] == 'i' || fullName[i] == 'o' || fullName[i] == 'u')                              // if statement to check for vowels
        {
            cout << "The vowels in your name is: " << fullName[i] << "\n";                                                                          // prints out any vowels in full name
        }
    }

    cout << endl;                                                                                                                                   // newline

    fullName = fName + " " + lName;                                                                                                                 // combines first name and last name with space to print it out in reverse

    reverse(fullName.begin(), fullName.end());                                                                                                      // reverse full name (reverse(str.begin(), str.end()))

    cout << "Lets see your name in reverse.\n";

    for(int i = 2; i >= 0; i--)                                                                                                                     // for loop for presentation
    {
        usleep(5000000);                                                                                                                            // wait for 5s

        if(i == 2)                                                                                                                                  
        {
            cout << "..." << " \n";                     
        }
        else if(i == 1)
        {
            cout << "Sorry, still working on it...\n";
        }
        
    }

    cout << "\nHere is your name in reverse: " << fullName << ".\n\n";                                                                               // print out reversed name

    return 0;
}