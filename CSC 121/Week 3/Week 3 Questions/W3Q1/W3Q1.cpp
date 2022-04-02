/*

    Week 3      Discussion Question 1
    Moksh Shah  01-31-2022
    If-Else Statements
    CSC 121

*/

#include <iostream>
using namespace std;

int main()
{
    int n1{0}, n2{0};                                                                               // int for number 1 & number 2

    cout << "\nPlease enter your 2 numbers: \n";                                                    // prompt to enter 2 numbers
    cin >> n1 >> n2;                                                                                // stores 2 numbers

    /*
     
     IF else statements for number 1

    */

    // check if number 1 is even or odd
    if(n1 % 2 == 0)                                                                                 // if even prints this 
    {
        cout << "The first number that you enter which is " << n1 << " is an even number.\n\n";       
    }
    else                                                                                            // if its odd then it prints this
    {
        cout << "The first number that you enter which is " << n1 << " is a odd number.\n\n";
    }

    
    // checks if number is positive, negative, or 0
    if (n1 > 0)                                                                                    // if positive then prints this                                                                 
    {
        cout << "The first number that you enter which is " << n1 << " is a positive number.\n\n";
    }
    else if(n1 < 0)                                                                                // if negative then prints this  
    {
        cout << "The first number that you enter which is " << n1 << " is a negative number.\n\n";
    }
    else                                                                                           // if nor positive or negative then prints this 
    {
        cout << "The first number that you enter is a 0.\n\n";
    }


    // checks if number 1 is greater than number 2
    if (n1 > n2)                                                                                   // if number 1 is greater than number 2 then prints this 
    {
        cout << "The first number that you enter which is " << n1 << " is greater than the second number which is " << n2 << ".\n\n";
    }
    else                                                                                           // if number 1 is smaller than number 2 then prints this
    {
        cout << "The first number that you enter which is " << n1 << " is smaller than the second number which is " << n2 << ".\n\n";
    }


    // checks if number 1 is divisible by number 2 
    if (n1 % n2 == 0)                                                                             // if divisible then prints this 
    {
        cout << "The first number that you enter which is " << n1 << " is divisible by the second number which is " << n2 << ".\n\n";
    }
    else                                                                                          // if not divisible then prints this
    {
        cout << "The first number that you enter which is " << n1 << " is not divisible by the second number which is " << n2 << ".\n\n";
    }


    /*

     IF else statements for number 2
    
    */

    // checks if number 2 is odd or even
    if (n2 % 2 != 0)                                                                              // if odd then prints this 
    {
        cout << "\nThe second number that you enter which is " << n2 << " is a odd number.\n\n";
    }
    else                                                                                          // if even then prints this
    {
        cout << "\nThe second number that you enter which is " << n2 << " is an even number.\n\n";
    }


    // checks if number 2 is positive, negative, or 0
    if (n2 > 0)                                                                                   // if number 2 is positive then prints this
    {
         cout << "The second number that you enter which is " << n2 << " is a positive number.\n\n";
    }
    else if (n2 < 0)                                                                              // if number 2 is negative then prints this
    {
         cout << "The second number that you enter which is " << n2 << " is a negative number.\n\n";
    }
    else                                                                                          // if its nor positive or negative then prints this 
    {
         cout << "The second number that you enter which is 0.\n\n";
    }


    // checks if number 2 is greater than number 1
    if (n2 > n1)                                                                                  // if number 2 greater than number 1 then prints this 
    {
        cout << "The second number that you enter which is " << n2 << " is greater than the first number which is " << n1 << ".\n\n";
    }
    else                                                                                          // if number 2 is smaller than number 2 then prints this 
    {
        cout << "The second number that you enter which is " << n2 << " is smaller than the first number which is " << n1 << ".\n\n";
    }


    // checks if number 2 is divisible by number 1
    if(n2 % n1 == 0)                                                                              // if number 2 is divisible by number 1 then prints this 
    {
        cout << "The second number that you enter which is " << n2 << " is divisible by the first number which is " << n1 << ".\n\n";
    }
    else                                                                                          // if number 2 is not divisible by number 1 then prints this 
    {
        cout << "The second number that you enter which is " << n2 << " is not divisible by the first number which is " << n1 << ".\n\n";
    }


    return 0;
}