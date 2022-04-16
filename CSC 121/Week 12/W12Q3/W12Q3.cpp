/*

    Moksh Shah      Discussion Question 1
    Week 12         04/15/2022
    CSC 121
    Getter and Setter

*/

#include <iostream>
#include <string>
#include <windows.h>
#include "methods.h"                                                                                                // include methods.h                                 
using namespace std;

int main()
{
    methods w12q3;                                                                                                  // create object of class methods
    w12q3.Display();                                                                                                // call method Display                                  

    Sleep(500);                                                                                                     // pause for 500 milliseconds
    
    cout << "\nYour favorite sport before any changes: " << w12q3.getFavSport() << endl;                            // display data from getFavSport() method before any changes          
    cout << "Your favorite team from that sport before any changes: " << w12q3.getFavTeam() << endl;                // display data from getFavTeam() method before any changes

    Sleep(500);                                                                                                     // pause for 500 milliseconds

    cout << "\nLets change the data";                                                                               // display message

    for(int i = 0; i < 3; i++)                                                                                      //for loop for presentation
    {
        cout << ".";
        Sleep(1000);
    }

    w12q3.setFavSport("MotoGP");                                                                                    // call method setFavSport
    w12q3.setFavTeam("Team USA");                                                                                   // call method setFavTeam

    cout << endl;
    cout << "\nYour favorite sport after changes: " << w12q3.getFavSport() << endl;                                 // display data from getFavSport() method after changes
    cout << "Your favorite team from that sport after changes: " << w12q3.getFavTeam() << endl;                     // display data from getFavTeam() method after changes

    cout << endl;

    return 0;
}