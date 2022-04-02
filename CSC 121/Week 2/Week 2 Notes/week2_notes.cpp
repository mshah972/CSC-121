/*

    Chapter 2 - DataType
    Moksh Shah      01/24/2022
    Week 2 - CSC 121

*/

#include <iostream>     // intreprets cout << command
using namespace std;    // needed to replace std::


/*

    int- integer are whole number and will round to the nearest one 15.9 = 15



    Char - Character holds enought space for one character 




    Declaring and Initializing Data Types

    variable_type       variable_name       variable_value;

    for eg: 

    int Age;  //Declared but not initialized - we have no idea what the value of Age will start as

    double 
*/

int main()                              // Starts Program
{
    cout << "\nInteger Demo 1\n";        // Title

    int minutes = 11, hours = 10;          // Declare and initialize 2 integers

    cout << "\n\nThe current time in minutes " << minutes << " and hours = " << hours;       // display default
    cout << "\n\nThe meeting time is " << minutes * 15 << " " << hours - 3;     // add offset time

    return 0;       // end
} 