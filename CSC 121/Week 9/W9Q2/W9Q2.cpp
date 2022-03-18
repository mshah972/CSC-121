/*

    Week 9      Dicussion Question 2
    Moksh Shah  03/14/2021
    Enumerations
    CSC 121

*/

#include <iostream>
#include <random>
#include <windows.h>
#include <stdio.h>
using namespace std;

enum rgb                                                                                                        // enumeration for rgb preset to black
{
    r = 255,
    g = 255,
    b = 255
}; 

int main()                                                                                                      // main function
{
    rgb Red = r, Green = g, Blue = b;                                                                           // declaration of enum rgb with variable for 3 color set to the preset
    int random;                                                                                                 // int random to generate a random number
    string input = "", black = "";                                                                              // string variable for inputs

    cout << endl;
    cout << "Do you want to generate a random rgb color? (y/n): ";                                              // prompt
    cin >> input;
    cout << endl;

    cout << "Are you looking for a black color? (y/n): ";                                                       // prompt
    cin >> black;

    if (black == "y" || black == "Y") // if statement to check if the user want a black color
    {
        cout << endl;
        cout << "\nYour black color code is R:" << Red << " G:" << Green << " B:" << Blue << endl;              // print out the preset color codes
        cout << "\n\nDo you want to generate another color code? (y/n): ";                                      // ask the user is they want any other color codes
        cin >> input;
        cout << endl;
    }

    while (input == "y")                                                                                        // while loop if input = "y"
    {
        cout << endl;

        for (int i = 0; i < 1; i++)                                                                             // for loop to print out those random codes
        {
            printf("\nYour random generated color code is R:");                                             

            for (int j = 0; j < 1; j++)                                                                         // for loop to print a random number from 1 to 256 for red
            {
                random = 1 + (rand() % 256);
                Sleep(700);
                cout << random << " ";
            }

            printf(" G:");

            for (int j = 0; j < 1; j++)                                                                         // for loop to print a random number from 1 to 256 for green
            {
                random = 1 + (rand() % 256);
                Sleep(700);
                cout << random << " ";
            }

            printf(" B:");

            for (int j = 0; j < 1; j++)                                                                         // for loop to print a random number from 1 to 256 fro blue
            {
                random = 1 + (rand() % 256);
                Sleep(700);
                cout << random << " ";
            }
            break;
        }
        cout << endl;
        cout << "\n\nDo you want to generate another color code? (y/n): ";                                      // prompting the user if they want another color code
        cin >> input;
    }

    if (input == "n")                                                                                           // if input = "n" then exit the program
    {
        cout << "\nNo worries, you can use our program any time you need to get a random rgb code." << endl;
    }

    cout << "\nThanks and have great day!!\n";
    exit;

    Red = r;                                                                                                    // setting the red, green, blue variable to preset
    Green = g;
    Blue = b;

    return 0;
}