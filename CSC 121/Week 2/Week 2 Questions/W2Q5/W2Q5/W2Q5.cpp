/*

    Week 2      Discussion Question 5
    Trig Vectors
    Moksh Shah  01-28-2022
    CSC 121

*/

#include <iostream>
#include <math.h>                                                           // required to use math 
using namespace std;

int main()
{
    double base, height;                                                    // double variable for base and height
    double pi = 3.14;                                                       // double variable to store pi value

    cout << "Please enter your base first & then height: \n";               // prompt user to enter their base and height
    cin >> base >> height;                                                  // stores the base and height to their variable 

    double hypotenuse, theta;                                               // double variable for hypotenuse and theta

    hypotenuse = sqrt(pow(base, 2) + pow(height, 2));                       // calculate the hypotenuse using base and height
    theta = (acos(base / hypotenuse)) * (180/ pi);                          // calculate the theta using base, hypotenuse, and pi

    cout << "\nYour hypotenuse for this triangle is " << hypotenuse << " and your theta is " << theta << "\n\n";        // prints out the calculated hypotenuse and theta

    cout << "Please enter your hypotenuse first & then theta: \n";          // prompt the user to enter their hypotenuse and theta
    cin >> hypotenuse >> theta;                                             // store to value into previous declared variable

    base = (cos(theta / (180 / pi))) * hypotenuse;                          // calculate the base 
    height = (sin(theta / (180 / pi))) * hypotenuse;                        // calculate the height

    cout << "\nYour base for this triangle is " << base << " with a height of " << height << "\n";                      // prints out the calculated base and height

    return 0;
}
