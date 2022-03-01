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

    int num = stoi(fullString);                                                                 

    temp = num;                                                                             

    while (num > 0) 
    {                                                                       
        length = num % 10;                                                                     
        sum = (sum * 10) + length;
        num = num / 10;
    }
    
    if (temp == sum) 
    {                                                                      
        cout << "\nThe number is a Palindrome number.\n";
        cout << endl;

        int center = stoi(choice[2]);                                                             

        for (int i = 0; i < center; i++) 
        {                                                   
            for (int j = 0; j < center; j++) 
            {
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else 
    {                                                                                 
        cout << "\nThe number is not a Palindrome number.\n\n";
    }

    return 0;
}
