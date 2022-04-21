/*

    Moksh Shah            Discussion Question 1
    Week 13               04/20/2021
    CSC 121
    UML Student

*/

#pragma once                                                                        // Include the header file once
#include <iostream>                                                                 
#include <string>
using namespace std;

class Student {                                                                     // Class declaration

    public:                                                                         // Public section
        Student()                                                                   // Default constructor
        {
            name = "";                                                              // Set the name to an empty string                               
            gpa = 0.0;                                                              // Set the gpa to 0.0
        }

        Student(string sName, double sGPA)                                          // Constructor with parameters
        {
            name = sName;                                                           // Set the name to the parameter                                    
            gpa = sGPA;                                                             // Set the gpa to the parameter                                  
        }

        void Display()                                                              // Display function
        {   
            cout << "\nName: " << name << endl;                                     // Display the name                  
            cout << "GPA: " << gpa << endl;                                         // Display the gpa
        }

    bool Approval(double sGPA)                                                      // Approval function
    {
        if(sGPA < 3.0)                                                              // if statement to check if the student is failed
        {
            return false;                                                           // Return false                        
        }
        else                                                                        // else statement
        {
            return true;                                                            // Return true                              
        }
    }

    void setName(string sName)                                                      // Set name function
    {
        name = sName;                                                               // Set the name to the parameter                                           
    }

    void setGPA(double sGPA)                                                        // Set gpa function
    {
        gpa = sGPA;                                                                 // Set the gpa to the parameter
    }

    string getName()                                                                // Get name function
    {
        return name;                                                                // Return the name                          
    }

    double getGPA()                                                                 // Get gpa function
    {
        return gpa;                                                                 // Return the gpa
    }

    private:                                                                        // Private section
        string name;                                                                // Declare a string variable
        double gpa;                                                                 // Declare a double variable
};