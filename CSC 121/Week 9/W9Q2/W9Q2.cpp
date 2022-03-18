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

enum rgb {r = 255, g = 255, b = 255};

int main()
{
    rgb Red = r, Green = g, Blue = b;
    int random;
    string input = "", black = "";

    cout << endl;
    cout << "Do you want to generate a random rgb color? (y/n): ";
    cin >> input;
    cout << endl;

    cout << "Are you looking for a black color? (y/n): ";
    cin >> black;

    if(black == "y" || black == "Y")
    {
        cout << endl;
        cout << "Your black color code is R:" << Red << " G:" << Green << " B:" << Blue << endl;
        cout << endl; 
    }
        
    while(input == "y" )
    {    
        cout << endl;

        for (int i = 0; i < 1; i++)
        {
            printf("Your random generated color code is R:");

            for (int j = 0; j < 1; j++)
            {
                random = 1 + (rand() % 256);
                Sleep(700);
                cout << random << " ";
            }

            printf(" G:");

            for (int j = 0; j < 1; j++)
            {
                random = 1 + (rand() % 256);
                Sleep(700);
                cout << random << " ";
            }

            printf(" B:");

            for (int j = 0; j < 1; j++)
            {
                random = 1 + (rand() % 256);
                Sleep(700);
                cout << random << " ";
            }
            break;
        }
        cout << endl;
        cout << "\n\nDo you want to generate another color code? (y/n): ";
        cin >> input;
    }
    
    cout << "No worries, you can use our program any time you need to get a random rgb code." << endl;
    cout << "\nThanks and have great day!!\n" << endl;
    exit;

    Red = r;
    Green = g;
    Blue = b;
    cout << "\n" << endl;

    return 0;
}