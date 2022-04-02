/*

    Week 2      Discussion Question 3
    Combining Strings
    Moksh Shah  01-26-2022
    CSC 121

*/

#include <iostream>
using namespace std;

int main()
{
    string fname, lname;                                        // String for first and last name

    cout << "Please enter your first name: \n";                 // prompt for first name
    cin >> fname;                                               // stores first name into fname string variable

    cout << "Please enter your last name:\n";                   // prompt for last name
    cin >> lname;                                               // stores last name into lname string variable

    string fullname = (fname + lname);                          // string to combine fname and lname to get length of full name
    
    char first = fname[0];                                      // char variable to get first name's first character
    char last = lname[0];                                       // char variable to get last name's first character
    int length = fullname.length();                             // int variable to get fullname length

    cout << "\nPlease give me a second to make your 2 emails\n\n"                                           
        << "Your first email is " << first + lname << "@company.com\n"                                      // sentence that prints @company.com email
        << "And your second email is " << first << last << length << "@whatsInaName.com\n\n"                // sentence that pritns @whatInaName.com email
        << "Thank you for using our service, hope you have a great day!! :)\n\n";
        
    

    return 0;
}

