/*

    Week 8      Dicussion Question 2
    Moksh Shah  03/08/2021
    Functions
    CSC 121

*/

#include <iostream>
using namespace std;

void funcResult(string, int);

int main()
{
    string userName = "";                                                                                       // string variable for name
    int userAge = 0;                                                                                            // int variable for age

    cout << endl;

    cout << "Enter your name: ";                                                                                // prompt for name
    cin >> userName;

    cout << "Enter your age: ";                                                                                 // prompt for age
    cin >> userAge;
    cout << endl;

    funcResult(userName, userAge);                                                                              // function call to out the results

    return 0;
}

void funcResult(string name, int age)                                                                           // void function that takes string and int values
{
    int total = 0, userName = 0;                                                                                // int variable for total count and name length

    userName = name.length();                                                                                   // getting the length on the name by using .length()

    total += userName + age;                                                                                    // adding name length and age to get the total

    cout << endl;

    cout << "Your Age: " << age << endl;                                                                        // prints out the age variable

    cout << "Your name length: " << userName << endl;                                                           // prints out the name length

    cout << "Total: " << total << endl;                                                                         // prints out the total 

    cout << endl;

}
