/*

    Lab 2 - Tic-Tac-Toe
    Moksh Shah  01/25/2022
    Week 2 - CSC 121

*/

#include <iostream>
#include <iomanip>
using namespace std;

int Title()
{
    /*
            
            This code prints out my name, title, project name, and a description using cout command.
            I have also used setw() to align all the sentences to the left so the output don't look irregular.
            I have also used \t and \n escapes sequences to create some space in between.

    */

   cout << endl;																															// printing new line

   cout << setw(30) << "( Moksh Shah\t 01-25-2022\n";																						// printing my name with a date
   cout << endl;																															// printing a blank line

   cout << setw(41) << "Week 2 Lab 2\t Tic-Tac-Toe Project\n";																				// printing the week and project name 
   cout << endl;																															// printing a blank line


   cout << setw(30) << "Use of integer array )\n";																							// printing a description
   cout << endl;															                                                                // printing a blank line																	

   return 0;
}

int Display() 
{
    int number[10] = {0,1,2,3,4,5,6,7,8,9};                                                                                                 // Int number array 
    
    /*

        prints a tic-tac-toe table using 
        \n, \t commands.

    */

    // prints out the table using setw(), \n, and \t
        cout << "\n\n\tLet's Play Tic-Tac-Toe\n\n" << endl; 																				// Cout for greeting

        cout << " " << endl;																												// prints blank line

        cout << "     |     |     " << endl;																								// prints lines for the tic-tac-toe table

        cout << "  " << number[1] << "  |  " << number[2] << "  |  " << number[3] << endl;													// prints numbers from 1 to 3 using int number[]

        cout << "_____|_____|_____" << endl;																								// prints lines for the tic-tac-toe table

        cout << "     |     |     " << endl;																								// prints lines for the tic-tac-toe table

        cout << "  " << number[4] << "  |  " << number[5] << "  |  " << number[6] << endl;													// prints numbers from 4 to 6 using int number[]

        cout << "_____|_____|_____" << endl;																								// prints lines for the tic-tac-toe table

        cout << "     |     |     " << endl;																								// prints lines for the tic-tac-toe table
		
		cout << "  " << number[7] << "  |  " << number[8] << "  |  " << number[9] << endl;													// prints numbers from 7 to 9 using int number[]

        cout << "     |     |     " << endl;																								// prints lines for the tic-tac-toe table


    	cout << setw(30) << "Please pick your 5 number one by one: \n";                                                                     // prompt to pick 5 numbers
    	cin >> number[1] >> number[2] >> number[3] >> number[4] >> number[5];                                                               // stores the 5 numbers into int number[10] 

    	cout << "\nYou enter " << number[1] << ", " << number[2] << ", " << number[3] << ", " << number[4] << ", and " << number[5];        // prints out the users 5 numbers

    return 0;
}

int main()
{
    Title();																																// print out the Title() function on the terminal
    
    Display();																																// print out the Display() function on the terminal

    return 0;
}