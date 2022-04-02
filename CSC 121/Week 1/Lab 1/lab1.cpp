/*
  
    Lab 1 - Tic-Tac-Toe
    Moksh Shah 01/19/2022
    Week 1 - CSC 121

*/

#include <iomanip>      // Needed for setw()
#include <iostream>     // Needed for cout << & cin >> 
using namespace std;    // Replaces the std:: call


int Title()     // This function is used to print out the title
{
    /*

        This code prints out my name, title, project name, and a description using the std::cout command.
        I used setw() to align all the sentences to the left so the output don't look irregular.
        I have also used \t escapes sequences to create some space in between.

    */
   cout << endl;

   cout << setw(30) << "( Moksh Shah\t 01-19-2022\n";                   // prints "name     date"
   cout << endl;

   cout << setw(41) << "Week 1 Lab 1\t Tic-Tac-Toe Project\n";          // prints "title    project"
   cout << endl;

   cout << setw(37) << "Objective and commands used )\n";               // prints "description"
   cout << endl;
   
    return 0;
}


int Display()       // This function is used to print the tic-tac-toe
{
    /*
            Prints a Tic-Tac-Toe table using
            \n, \t commands.
    
    */
        
        

        // prints out the table using setw(), \n, and \t
         cout << setw(15) << "\t\t|\t \t|\t\n";

         cout << setw(18) << "\t1\t|\t2\t|\t3\t\n";

         cout << setw(44) << "_________|_______________|__________\n";

         cout << setw(15) << "\t\t|\t \t|\t\n";

         cout << setw(18) << "\t4\t|\t5\t|\t6\t\n";

         cout << setw(44) << "_________|_______________|__________\n";

         cout << setw(15) << "\t\t|\t \t|\t\n";

         cout << setw(18) << "\t7\t|\t8\t|\t9\t\n";

         cout << setw(15) << "\t\t|\t \t|\t\n\n";
         
    int choice;                                                // int to store the user's choice
    std::cout << setw(30) << "Please choose your box?\n";      // Asks user to choose
    cin >> choice;                                             // collect user input and assing it to choice
    
    cout << "\nYour choice is " << choice << "\n";             // prints out users input (just to check if cin assign the correct value)
    return 0;
}


int main()         // Main function to output both the function in the terminal
{
    Title();
    Display();
}


