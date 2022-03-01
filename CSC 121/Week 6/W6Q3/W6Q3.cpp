/*

    Week 6      Dicussion Question 3
    Moksh Shah  02/22/2021
    Palindrome Squares
    CSC 121

*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string choice[5];                                                                                                                       // String varible array for user choice                                  
    int length, sum = 0, temp;                                                                                                              // int varible sum , temp, and length
    string fullString = "0";
   
    for (int i = 1; i <= 5; i++)                                                                                                            // for loop to ask user 5 times to enter their choice
    {                                                           
        cout << "Please enter your " << i << " number: ";                                                                                   // prompt for user
        cin >> choice[i];                                                                                                                   // store the choice in array
        fullString += choice[i];                                                                                                            // create a string with all the provided number
        cout << endl;                                                                                                                       // new line
    }

    int sInt = stoi(fullString);                                                                                                            // convert string to int using stoi

    temp = sInt;                                                                                                                            // set the temp varaible to converted int

    while (sInt > 0)                                                                                                                        // while loop if the sInt is > 0
    {                                                                       
        length = sInt % 10;                                                                                                                 // finds out the % of (sInt % 10)                                                           
        sum = (sum * 10) + length;                                                                                                          // finds sum
        sInt = sInt / 10;                                                                                                                   // divide sInt by 10
    }
    
    if (temp == sum)                                                                                                                        // if statement to checks if temp == sum
    {                                                                      
        cout << "\nThe number is a Palindrome number.\n";                                                                                   // cout for Palindrome number
        cout << endl;                                                                                                                       // newline

        int center = stoi(choice[2]);                                                                                                       // find the center of the array                                          

        for (int i = 0; i < center; i++)                                                                                                    // for loop to print out the rows of *
        {                                                   
            for (int j = 0; j < center; j++)                                                                                                // for loop to print out the column of *
            {
                cout << "* ";
            }
            cout << endl;                                                                                                                   // newline
        }
        cout << endl;                                                                                                                       // newline
    }
    else                                                                                                                                    // if temp != sum
    {                                                                                 
        cout << "\nThe number is not a Palindrome number.\n\n";                                                                             // number is not Palindrome number
    }

    return 0;
}
