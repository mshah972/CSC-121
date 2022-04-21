/*

    Moksh Shah            Discussion Question 2
    Week 13               04/20/2021
    CSC 121
    UML Fruit

*/

#pragma once                                                                        // Include the header file once
#include <iostream>
#include <string>
using namespace std;

class Fruit {                                                                       // Declare the class Fruit                  

    public:                                                                         // Declare the public section                                        
        string Name{"a"};                                                           // Declare a string variable                
        string Color{"z"};                                                          // Declare a string variable
        int numberOf{0};                                                            // Declare an integer variable                          

        Fruit()                                                                     // Declare the default constructor
        {
            Name = "a";                                                             // Set the name of the fruit                         
            Color = "z";                                                            // Set the color of the fruit
            numberOf = 0;                                                           // Set the number of the fruit                                     
        }

        Fruit(string name, string color, int fNum)                                  // Declare the constructor with parameters
        {
            Name = name;                                                            // Set the name of the fruit                        
            Color = color;                                                          // Set the color of the fruit                             
            numberOf = fNum;                                                        // Set the number of the fruit
        }

        void setName(string name)                                                   // Set name function
        {
            Name = name;                                                            // Set the name of the fruit
        }

        void setColor(string color)                                                 // Set color function
        {
            Color = color;                                                          // Set the color of the fruit
        }

        void setNumberOf(int fNum)                                                  // Set number of function
        {
            numberOf = fNum;                                                        // Set the number of the fruit              
        }

        string getName()                                                            // Get name function
        {
            return Name;                                                            // Return the name of the fruit                         
        }

        string getColor()                                                           // Get color function
        {
            return Color;                                                           // Return the color of the fruit                               
        }

        int getNumberOf()                                                           // Get number of function
        {
            return numberOf;                                                        // Return the number of the fruit                       
        }

        void Display()                                                              // Display function
        {
            cout << "\nName: " << Name << endl;                                     // Print the name of the fruit                       
            cout << "Color: " << Color << endl;                                     // Print the color of the fruit                      
            cout << "Number of: " << numberOf << endl;                              // Print the number of the fruit                     
        }

};