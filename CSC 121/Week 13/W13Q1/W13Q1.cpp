/*

    Moksh Shah            Discussion Question 1
    Week 13               04/20/2021
    CSC 121
    UML Student

*/

#include <iostream>
#include <string>
#include <windows.h>
#include "Student.h"                                                                                        // Include the header file                                              
using namespace std;

void Approval(void);

Student student1("Will Smith", 1.0);                                                                        // Create a student object with name "Will Smith" and gpa 1.0

int main()
{

    string name;                                                                                            // Declare a string variable                                 
    double gpa;                                                                                             // Declare a double variables                               

    student1.Display();                                                                                     // Display the student object

    Approval();                                                                                             // Call the Approval function

    cout << endl;                                                                                           // Add a new line

    system("pause");                                                                                        // Pause the program                                        

    cout << "\nPress any key to continue...";                                                               // Display a message

    system("cls");                                                                                          // Clear the screen

    cout << "\nPlease enter the student name: ";                                                            // Prompt the user to enter the student name
    getline(cin, name);                                                                                     // Get the student name
    student1.setName(name);                                                                                 // Set the student name

    cout << "\nPlease enter the student GPA: ";                                                             // Prompt the user to enter the student GPA
    cin >> gpa;                                                                                             // Get the student GPA
    student1.setGPA(gpa);                                                                                   // Set the student GPA                             

    cout << endl;                                                                                           // Add a new line

    student1.Display();                                                                                     // Display the student object

    Approval();                                                                                             // Call the Approval function

    cout << endl;                                                                                           // Add a new line

    return 0;
}

void Approval()                                                                                             // Void approval function
{
    if(student1.Approval(student1.getGPA()) == true)                                                        // if statement to check if the student is passed
    {
         cout << "\nStudent " << student1.getName() << " has been passed." << endl;                         // Display a message
    }
    else                                                                                                    // else student is not passed
    {
         cout << "\nStudent " << student1.getName() << " has been failed." << endl;                         // Display a message
    }

}