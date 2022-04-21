/*

    Moksh Shah            Discussion Question 2
    Week 13               04/20/2021
    CSC 121
    UML Fruit

*/

#include <iostream>
#include <string>
#include "Fruit.h"                                                                  // Include the header file                                              
using namespace std;

int main()
{
    
    string name;                                                                    // Declare a string variable
    string color;                                                                   // Declare a string variable                               
    int numberOf;                                                                   // Declare an integer variable  
    
    Fruit fruit;                                                                    // Create an object of the Fruit class

    fruit.Display();                                                                // Call the Display function

    cout << endl;                                                                   // Print a new line

    cout << "Enter the name of the fruit: ";                                        // Prompt the user to enter the name of the fruit
    getline(cin, name);                                                             // Get the name of the fruit from the user

    cout << "Enter the color of the fruit: ";                                       // Prompt the user to enter the color of the fruit                    
    getline(cin, color);                                                            // Get the color of the fruit from the user

    cout << "Enter the number of the fruit: ";                                      // Prompt the user to enter the number of the fruit                   
    cin >> numberOf;                                                                // Get the number of the fruit from the user

    fruit.setName(name);                                                            // Set the name of the fruit                            
    fruit.setColor(color);                                                          // Set the color of the fruit                         
    fruit.setNumberOf(numberOf);                                                    // Set the number of the fruit                  

    fruit.Display();                                                                // Call the Display function                    

    cout << endl;

    return 0;
}