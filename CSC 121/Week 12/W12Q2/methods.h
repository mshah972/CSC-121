/*

    Moksh Shah      Discussion Question 2
    Week 12         04/15/2022
    CSC 121
    Class

*/

#include <iostream>
#include <string>
using namespace std;

class methods {                                                                     // class methods
    public:                                                                         // public access specifier
        string name;                                                                // string variable name                                 
        int age;                                                                    // integer variable age

        void Display() {                                                            // void method Display                              
            cout << "\nEnter your name: ";                                          // prompt user to enter name
            cin >> name;                                                            // input name                               
            cout << "\nEnter your age: ";                                           // prompt user to enter age                    
            cin >> age;                                                             // input age

            cout << "\nName: " << name << endl;                                     // display name
            cout << "Age: " << age << endl;                                         // display age
            cout << endl;                                                           // end line                                       
        }
};