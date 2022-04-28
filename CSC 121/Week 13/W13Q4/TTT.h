/*

    Moksh Shah            Discussion Question 4
    Week 13               04/20/2021
    CSC 121
    UML TTT

*/

#include <iostream>
#include <string>
using namespace std;

class TTT{

    public:                                                                     // Public functions
        char choice;                                                            // choice of player

        void title()                                                            // title function
        {
            cout << "\n\n\t\tWelcome to Tic Tac Toe!\n\n";                      // welcome message        
            cout << "\n\t1. Play against the computer" << endl;                 // option 1                                         
            cout << "\t2. Play against another player" << endl;                 // option 2                                                      
            cout << "\t3. Quit" << endl;                                        // option 3
            cout << "\n\tEnter your choice: ";                                  // prompt for choice    
            cin >> choice;                                                      // get choice

            cout << "\n\nYour choice is: " << choice << endl;                   // display choice     

            cout << endl;     
        }

};