/*

    Week 5      Discussion Question 1
    Moksh Shah  02-14-2022
    Counters
    CSC 121

*/

#include <iostream>                                                                                                     // iostream library
#include <math.h>                                                                                                       // math library
#include <windows.h>                                                                                                    // windows library
using namespace std;


bool isPrime(int j)                                                                                                     // boolean function to identify if the number is prime ot not
{
    bool prime = true;                                                                                                  // bool variable prime which is set true as default

    if(j < 2)                                                                                                           // 0 and 1 are not prime numbers so we ignore them
    {
        prime = false;                                                                                                  // return false;
    }

    for(int i = 2; i <= j/2; i++)                                                                                       // for loop to check if the number is prime
    {
        if(j % i == 0)                                                                                                  // if provide number and i = 0
        {
            prime = false;                                                                                              // return false
            break;                                                                                                      // break
        }
    }

    return prime;                                                                                                       // return prime boolean
}

void funcUp()                                                                                                           // function for Up
{
    for(int i = 1; i <= 100; i++)                                                                                       // for loop to print numbers from 1 - 100
    {
        cout << i << " ";                                                                                               // print numbers in  1 2 3 ... format

        if(isPrime(i))                                                                                                  // checks if the number is prime
        {
            cout << endl;                                                                                               // if the number is prime then print a newline
        }

        Sleep(100);                                                                                                    // wait for a second
    }
}

void funcDown()                                                                                                         // fucntion for Down
{
    for(int i = 100; i >= 1; i--)                                                                                       // for loop to print number from 100 - 1
    {
        if(!isPrime(i))                                                                                                 // checks if the number is prime then skips the number
        {
            cout << i << " ";                                                                                           // prints out the number
        }

        Sleep(100);                                                                                                    // wait for a second
    }
}


int main()
{
    string input;                                                                                                       // string variable for Up or Down

    for(int i = 1; i <= 3; i++)                                                                                         // for loop to ask 3 times
    {
        cout << "\nPlease choose your option Up or Down: ";                                                               // prompt the user to enter their choice
        cin >> input;                                                                                                   // store the choice

        if(input == "Up")                                                                                               // checks if the user enter Up
        {
            funcUp();                                                                                                   // if input = Up then calls the funcUp
        }
        else if(input == "Down")                                                                                        // if user enter Down
        {
            funcDown();                                                                                                 // calls the funcDown
        }
    }
    return 0;
}