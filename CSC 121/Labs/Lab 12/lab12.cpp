/*

    Moksh Shah      04/17/2022
    Lab 12          CSC 121
    UML 

*/

#include <iostream>
#include <string>
#include <windows.h>
#include "umlClass.h"                                                                                       // include umlClass.h
using namespace std;

int main()
{
    uml umlClass;                                                                                           // create umlClass object

    char quit = 'y';                                                                                        // char variable quit
    int choice;                                                                                             // int variable choice
    int deposit;                                                                                            // int variable deposit                     
    int withdraw;                                                                                           // int variable withdraw               

    cout << "\n\nPlease enter your name: ";                                                                 // prompt user for name
    getline(cin, umlClass.name);                                                                            // input name

    system("cls");                                                                                          // clear screen

    cout << "\n\n\tWelcome " << umlClass.name << "!" << endl;                                               // welcome user
    cout << "\nDo you want to access your account? (y/n): ";                                                // prompt user for access
    cin >> quit;                                                                                            // get access from user

    while(quit == 'y')                                                                                      // while loop if user wants to access account                                                   
    {
        system("cls");                                                                                      // clear screen             
        cout << "\n\t\tWelcome to the UML Bank\n\n";                                                        // welcome user            
        cout << "\nThanks for using our service, " << umlClass.name << "!\n\n";                             // thanks user
        cout << "Your current balance is: $" << umlClass.getBalance() << "\n\n";                            // display balance  
        cout << "What would you like to do?\n\n";                                                           // prompt user for choice
        cout << "1. Deposit\n";                                                                             // display deposit option
        cout << "2. Withdraw\n";                                                                            // display withdraw option                  
        cout << "3. Check Balance\n";                                                                       // display balance option              
        cout << "4. Quit\n\n";                                                                              // display quit option
        cout << "Enter your choice: ";                                                                      // prompt user for choice
        cin >> choice;

        switch(choice)                                                                                      //switch case for choice
        {
            case 1:                                                                                         // case 1
                cout << "\nHow much would you like to deposit?\n";                                          // prompt user for deposit amount
                cout << "\nEnter your amount: ";                                                            // prompt user for deposit amount
                cin >> deposit;                                                                             // get deposit amount from user
                umlClass.setDeposit(deposit);                                                               // call setDeposit method                  
                break;                                                                                      // break case 1
            case 2:                                                                                         // case 2
                cout << "\nHow much would you like to withdraw?\n";                                         // prompt user for withdraw amount
                cout << "\nEnter your amount: ";                                                            // prompt user for deposit amount
                cin >> withdraw;                                                                            // get withdraw amount from user
                umlClass.setWithdraw(withdraw);                                                             // call setWithdraw method
                break;                                                                                      // break case 2
            case 3:                                                                                         // case 3           
                cout << "\nYour current balance is: $" << umlClass.getBalance() << "\n";                    // display balance         
                break;                                                                                      // break case 3             
            case 4:                                                                                         // case 4
                cout << "\n\nThank you for using our service, " << umlClass.name << "!\n";                  // thanks user
                quit = 'n';                                                                                 // set quit to n
                exit(0);                                                                                    // exit case 4
            default:                                                                                        // default                          
                cout << "Invalid choice.\n";                                                                // invalid choice               
                break;                                                                                      // break default              
        }
        
        cout << "\n\nWould you like to access your account again? (y/n): ";                                 // prompt user for access again          
        cin >> quit;                                                                                        // get access again from user

    }
    system("cls");                                                                                          // clear screen
    cout << "\n\n\tThank you for using our service, " << umlClass.name << "!\n";                            // thanks user
    cout << "\n\tYour ending balance is: $" << umlClass.getBalance() << "\n\n";                               // display balance


    return 0;                                                                                               // return 0
}