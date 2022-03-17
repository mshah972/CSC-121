/*

    Week 8      Dicussion Question 4
    Moksh Shah  03/10/2021
    Recursion & Factorials
    CSC 121

*/

#include <iostream>
using namespace std;

int fac(int);                                                                                               // initializing function fac

int main()                                                                                                  // main function
{
    
    for(int i = 1; i < 11; i++)                                                                             // for loop to print 1 to 10 for factorials
    {
        cout << "Factorials for " << i << " is " <<  fac(i) << endl;                                        // printing the factorials
    }

    return 0;
}

int fac(int n)                                                                                              // function fac
{
    if(n == 0)                                                                                              // if statement with a condition n = 0
    {
        return 1;                                                                                           // return 1
    }
    else                                                                                                    // or
    {
        return n * fac(n - 1);                                                                              // return the factorials by using recursion
    }
}