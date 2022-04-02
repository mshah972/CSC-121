/*

    Week 4      Discussion Question 4
    Moksh Shah  02-11-2022
    Demorgans Law
    CSC 121

*/

#include <iostream>                                                                                             // iostream library
using namespace std;                                                                                            // namespace for std

int main()
{
    int x{0}, y{0}, a{0}, b{0}, g{0}, i{0}, j{0};                                                               // declaring int x, y, a, g, i, j

    bool A{true}, B(true), C{true}, D{true};                                                                    // boolean variable for all question a to d

    x = 8;                                                                                                      // assign value to x
    y = 7;                                                                                                      // assign value to y
    a = 5;                                                                                                      // assign value to a
    b = 5;                                                                                                      // assign value to b
    g = 7;                                                                                                      // assign value to g
    i = 5;                                                                                                      // assign value to i
    j = 9;                                                                                                      // assign value to j

    if(!(x < 5) && !(y >= 7))                                                                                   // if else statement for question 1
    {
        A = true;
    }
    else
    {
        A = false;
    }

    if (!(a == b) || !(g != 5))                                                                                 // if else statement for question 2
    {
        B = true;
    }
    else 
    {
        B = false;
    }

    if(!(x <= 8) && (y> 4))                                                                                     // if else statement for question 3
    {
        C = true;
    }
    else 
    {
        C = false;
    }

    if(!(i > 4) || (j <= 6))                                                                                    // if else statement for question 4
    {
        D = true;
    }
    else 
    {
        D = false;
    }
    


    cout << "\nUsing Demorgans law for !(x < 5) && !(y >= 7) where x is " << x << " and y is " << y << ": " << A << "\n";                           // cout for question 1
    cout << "Using Demorgans law for !(a == b) || !(g != 5) where a is " << a << ", b is " << b << ", and g is " << g << ": " << B << "\n";         // cout for question 2
    cout << "Using Demorgans law for !(x <= 8) && (y > 4) where x is " << x << " and y is " << y << ": " << C << "\n";                              // cout for question 3
    cout << "Using Demorgans law for !(i > 4) || (j <= 6) where i is " << i << " and j is " << j << ": " << D << "\n\n";                            // cout for question 4

    return 0;
}