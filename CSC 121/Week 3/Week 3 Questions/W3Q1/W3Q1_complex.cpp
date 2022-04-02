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
    int n1{0}, n2{0};                                                   // int number 1 & number 2
    
    cout << "Please enter 2 numbers: \n";                               // prompt for user to enter their 2 numbers
    cin >> n1 >> n2;                                                    // to store the 2 numbers

    if (n1 % 2 == 0)                                                    // check if number is even or not
    {
        if (n1 > 0)                                                     // check if number 1 is positive number
        {   
            if (n1 > n2)                                                // check if number 1 is greater than number 2
            {
                if (n1 % n2 == 0)                                       // check if number 1 is divisible by number 2 
                {
                    cout << "\nThe first number that you wrote is a even number, a positive number, is greater than the second number, and also divisible by second number.\n";
                }
                else                                                    // if not divisible by number 2
                {
                    cout << "\nThe first number that you wrote is a even number, a positive number, is greater than the second number, and is not divisible by second number.\n";
                }
                
            }
            else                                                       // if number 1 is smaller than number 2
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a even number, a positive number, is smaller than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a even number, a positive number, is smaller than the second number, and is not divisible by second number.\n";
                }
                
            }
        }
        else if (n1 < 0)                                               // checks if number is negative
        {
            if (n1 > n2)
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a even number, a negative number, is greater than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a even number, a negative number, is greater than the second number, and is not divisible by second number.\n";
                }
            }
            else
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a even number, a negative number, is smaller than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a even number, a negative number, is smaller than the second number, and is not divisible by second number.\n";
                }
            }
        }
        else                                                            // checks if number 1 is 0
        {
            if (n1 > n2)
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a even number, a 0, is greater than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a even number, a 0, is greater than the second number, and is not divisible by second number.\n";
                }
            }
            else
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a even number, a 0, is smaller than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a even number, a 0, is smaller than the second number, and is not divisible by second number.\n";
                }
            }
        }
    }
    else                                                             // checks if number 1 is odd
    {
        if (n1 > 0)
        {
            if (n1 > n2)
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a odd number, a positive number, is greater than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a odd number, a positive number, is greater than the second number, and is not divisible by second number.\n";
                }
            }
            else
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a odd number, a positive number, is smaller than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a odd number, a positive number, is smaller than the second number, and is not divisible by second number.\n";
                }
            }
            
        }
        else if (n1 < 0)
        {
            if (n1 > n2)
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a odd number, a negative number, is greater than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a odd number, a negative number, is greater than the second number, and is not divisible by second number.\n";
                }
            }
            else
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a odd number, a negative number, is smaller than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a odd number, a negative number, is smaller than the second number, and is not divisible by second number.\n";
                }
            }
        }
        else
        {
            if (n1 > n2)
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a odd number, a 0 , is greater than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a odd number, a 0, is greater than the second number, and is not divisible by second number.\n";
                }
            }
            else
            {
                if (n1 % n2 == 0)
                {
                    cout << "\nThe first number that you wrote is a odd number, a 0, is smaller than the second number, and also divisible by second number.\n";
                }
                else
                {
                    cout << "\nThe first number that you wrote is a odd number, a 0, is smaller than the second number, and is not divisible by second number.\n";
                }
            }
        }
    }


    if (n2 % 2 != 0)                                                // checks if number 2 odd
    {
        if (n2 > 0)                                                 // checks if number 2 is positive number
        {
            if (n2 > n1)                                            // checks if number 2 is greater than number 1 
            {
                if (n2 % n1 == 0)                                   // checks if number 2 is divisible by number 1
                {
                    cout << "\nThe second number that you wrote is a odd number, a positive number, is greater than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a odd number, a positive number, is greater than the first number, and is not divisible by first number.\n\n";
                }
                
            }
            else                                                    // if number 2 is smaller than number 1
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a odd number, a positive number, is smaller than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a odd number, a positive number, is smaller than the first number, and is not divisible by first number.\n\n";
                }
                
            }
        }
        else if (n2 < 0)                                           // checks if number 2 is negative number
        {
            if (n2 > n1)
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a odd number, a negative number, is greater than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a odd number, a negative number, is greater than the first number, and is not divisible by first number.\n\n";
                }
            }
            else
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a odd number, a negative number, is smaller than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a odd number, a negative number, is smaller than the first number, and is not divisible by first number.\n\n";
                }
            }
        }
        else                                                        // checks if number 2 is 0
        {
            if (n2 > n1)
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a odd number, a 0, is greater than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a odd number, a 0, is greater than the first number, and is not divisible by first number.\n\n";
                }
            }
            else
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a odd number, a 0, is smaller than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a odd number, a 0, is smaller than the first number, and is not divisible by first number.\n\n";
                }
            }
        }
    }
    else                                                           // if number 2 is even number
    {
        if (n2 > 0)
        {
            if (n2 > n1)
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a even number, a positive number, is greater than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a even number, a positive number, is greater than the first number, and is not divisible by first number.\n\n";
                }
            }
            else
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a even number, a positive number, is smaller than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a even number, a positive number, is smaller than the first number, and is not divisible by first number.\n\n";
                }
            }
            
        }
        else if (n2 < 0)
        {
            if (n2 > n1)
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a even number, a negative number, is greater than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a even number, a negative number, is greater than the first number, and is not divisible by first number.\n\n";
                }
            }
            else
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a even number, a negative number, is smaller than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a even number, a negative number, is smaller than the first number, and is not divisible by first number.\n\n";
                }
            }
        }
        else
        {
            if (n2 > n1)
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a even number, a 0 , is greater than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a even number, a 0, is greater than the first number, and is not divisible by first number.\n\n";
                }
            }
            else
            {
                if (n2 % n1 == 0)
                {
                    cout << "\nThe second number that you wrote is a even number, a 0, is smaller than the first number, and also divisible by first number.\n\n";
                }
                else
                {
                    cout << "\nThe second number that you wrote is a even number, a 0, is smaller than the first number, and is not divisible by first number.\n\n";
                }
            }
        }
    }



    return 0;
}