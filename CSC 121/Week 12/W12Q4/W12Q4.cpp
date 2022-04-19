/*

    Moksh Shah      Discussion Question 4
    Week 12         04/15/2022
    CSC 121
    Constructors

*/

#include <iostream>
#include <string>
#include "constructor.h"                                                                                        // Include the header file                      
using namespace std;


int main()
{
    Student hStudent("Moksh Shah", 19);                                                                          // Create a Constructor object with name and age

    cout << "\nName: " << hStudent.getName() << endl;                                                            // Print the name
    cout << "Age: " << hStudent.getAge() << endl;                                                                // Print the age                            

    hStudent.setName("Will Smith");                                                                              // Change the name                              
    hStudent.setAge(35);                                                                                         // Change the age

    cout << "\nName: " << hStudent.getName() << endl;                                                            // Print the name again                                
    cout << "Age: " << hStudent.getAge() << endl;                                                                // Print the age again


    cout << endl;

    return 0;
}
