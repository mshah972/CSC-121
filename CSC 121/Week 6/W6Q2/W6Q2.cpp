/*

    Week 6      Dicussion Question 2
    Moksh Shah  02/22/2021
    Common Characters
    CSC 121

*/

#include <iostream>                                                                             // iostream library
#include <string.h>                                                                             // string header file
using namespace std;                                                                            // namespace for std

int main()
{

    string name1, name2, common;                                                                // string variable for names

    cout << "Please enter first name: ";                                                        // prompt for 1st name
    cin >> name1;                                                                               // store 1st name
    cout << endl;

    cout << "Please enter second name: ";                                                       // prompt for 2nd name
    cin >> name2;                                                                               // store 2nd name
    cout << endl;

    for(int i = 0; i < name1.length(); i++)                                                     // for loop for name 1
    {
        for(int j = 0; j < name2.length(); j++)                                                 // for loop for name 2
        {
            if(name1[i] == name2[j])                                                            // if statement to check if name 1 and name 2 has similar characters
            {
                common += name1[i];                                                             // assign the common character to common string
            }
        }
    }

    cout << "\nThis are the common characters in your 2 names: " << common << endl;             // print out the common characters

    for(int i = 0; i < common.length() - 1; i++)                                                // for loop to sort the characters in alphabectically order
    {
        for(int j = 0; j < common.length() - i - 1; j++)                                        
        {
            if(common[j] > common[j + 1])                                                       // if statement to see if current character is first or last
            {
                char temp = common[j + 1];                                                      // char variable temp to store the ordered character
                common[j + 1] = common[j];                                                      // makes an array                                              
                common[j] = temp;                                                               // stores the order character 1 by 1
            }
        }
    }

    cout << "This are the sorted common characters in your 2 names: " << common << "\n" <<endl; // print out the sorted common characters

    return 0;
}