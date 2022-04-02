/*

    Double Data types
    Random Equations

    PU & inputs 2 #s, calculate & store the math

*/

#include <iostream>                 // interprets the cin command
using namespace std;        

int main()
{
    cout << "Hello, world!\n";

    double number1{ 1 };            // declare & initialize 4 double variables
    double number2{ 2 };
    double z{ 3 };
    double quotient = number1 / number2;

    cout << "\n\nPlease enter 2 #'s";   // Prompt user & input2 #'s
    cin >> number1 >> number2;          // input command to enter 2 #'s

    cout << "\n\n\tx= " << number1 << "\ty =" << number2;   // Display mathematical results

    z = number1 + number2;          // Math calculation

    cout << "\n\tsum of " << number1 << " + " << number2 << " = " << z << endl;
    cout << "\n\tdiff of " << number1 << " - " << number2 << " = " << number1 - number2 << endl;
    cout << "\n\tprod of " << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    cout << "\n\tquotient = " << number1 / number2 << endl;
}
