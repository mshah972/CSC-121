

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string fName, sName;                                                                                    // string variables


    cout << endl;
    cout << "Please enter your 1 name: ";                                                                   // prompt for first name 
    cin >> fName;

    cout << endl;
    cout << "Please enter your 2 name: ";                                                                   // prompt for last name        
    cin >> sName;

    int fLetter[26] = {0};                                                                                  // int variable with array size 26 for first name
    int sLetter[26] = {0};                                                                                  // int variable with array size 26 for second name

    char common, ch = 'a';                                                                                  // char variable

    int q = (int)ch, w;                                                                                     // int variable casting characters to int

    for(int i = 0; i < fName.length(); i++)                                                                 // for loop to increment letters present in first name
    {
        fLetter[(int)fName[i] - q]++;
    }

    for(int i = 0; i < sName.length(); i++)                                                                 // for loop to increment letters present in second name
    {
        sLetter[(int)sName[i] - q]++;
    }

    cout << endl;
    
    cout << "The common letters are: ";                                                                     // prints out the common letter

    for(int i = 0; i < 26; i++)                                                                             // for loop to print out common characters
    {
        if(fLetter[i] != 0 && sLetter[i] != 0)                                                              // if statement to check is there are any common characters
        {
            for(int j = 0; j < min(fLetter[i], sLetter[i]); j++)                                            // for loop to print out those common characters
            {
                w = q + i;
                common = (char)(q + i);                                                                     // casting to char
                cout << common;
            }
        } 
    }

    cout << "\n" << endl;

    return 0;
}
