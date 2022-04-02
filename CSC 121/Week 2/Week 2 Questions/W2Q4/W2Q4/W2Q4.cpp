/*

    Week 2      Discussion Question 4
    Basic Math
    Moksh Shah  01-27-2022
    CSC 121

*/

#include <iostream>
#include <math.h>                   // need to use when we are using math in our program 
using namespace std;

int main()
{
    int x, y;              // int for x and y numbers

    cout << "Please enter 2 numbers: \n";           // prompt to enter 2 numbers
    cin >> x >> y;                         // stores 2 number
        
    int sum = x + y;                       // adds 2 numbers
    int different = x - y;                 // substract 2 numbers
    int product = x * y;                   // multiply 2 numbers
    int quotient = x / y;                  // divide 2 numbers

    cout << "\nThe Sum of 2 numbers is " << sum << "\n"         // prints out the sum of 2 numbers
        << "Then Difference is " << different << "\n"           // prints out the difference of 2 numbers
        << "Then Product is " << product << "\n"                // prints out the multiplication of 2 numbers 
        << "Lastly, the Quotient is " << quotient << "\n\n"     // prints out the division of 2 numbers
        << x << "^" << y << " = " << pow(x, y) << ", and " << y << "^" << x << " = " << pow(y, x) << "\n\n";    // prints out x^y and y^x sums


    cout << x << " % " << "2" << " = " << x % 2 << "\n"             // prints out x % 2
        << y << " % " << "2" << " = " << y % 2 << "\n"            // prints out y % 2
        << x << " % " << y << " = " << x % y << "\n"      // prints out x % y
        << y << " % " << x << " = " << y % x << "\n";     // prints out y % x


    return 0;
}
