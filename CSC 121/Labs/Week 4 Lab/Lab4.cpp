/*

    Lab 4 - Tic-Tac-Toe
    Moksh Shah 02-12-2022
    Week 4 - CSC 121

*/

#include <iostream>                                                                                                                         // iostream library
#include <iomanip>                                                                                                                          // iomanip library
#include <ctime>                                                                                                                            // required for time
using namespace std;                                                                                                                        // namespace for std

char number[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};                                                                       // global char number array 
void playerChoice();                                                                                                                        // global playerChoice()
void checkWin();                                                                                                                            // global checkWin()
char symbol;                                                                                                                                // global symbol
bool win{false};                                                                                                                            // global boolean variable for logic

int Title()
{
     /*
            
            This code prints out my name, title, project name, and a description using cout command.
            I have also used setw() to align all the sentences to the left so the output don't look irregular.
            I have also used \t and \n escapes sequences to create some space in between.

            **I have also learned how can we print time and date :
            (https://www.tutorialspoint.com/cplusplus-program-to-print-current-day-date-and-time)

    */
    time_t timetoday;                                                                                                                       // store time data
    time (&timetoday);                                                                                                                      // gets current time

    cout << endl;																															// printing new line

    cout << setw(20) << "( Moksh Shah\t" << asctime(localtime(&timetoday));														            // printing my name with a date
    cout << endl;																															// printing a blank line

    cout << setw(43) << "Week 4 Lab 4\t Tic-Tac-Toe Project\n";																				// printing the week and project name 
    cout << endl;																															// printing a blank line


    cout << setw(45) << "implenting checkWin() function )\n\n";																			// printing a description
    cout << endl;															                                                                // printing a blank line																	

    cout << "\tLet's Play Tic-Tac-Toe\n" << endl;                                                                                           // Cout for greeting 

   return 0;
}

int Display() 
{
    
    
    /*

        prints a tic-tac-toe table using 
        \n, \t commands.

    */

    // prints out the table using setw(), \n, and \t																				

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


    return 0;
}



void playerChoice()
{
    
    /*
            This function is used for letting user choose
            there number from the tic-tac-toe table
    */
    
    
    
    int choice = 0;                                                                                                                         // int value for choice

    cout << "\nPlease choose your symbol X or O: " << endl;                                                                                 // prompt to choose symbol
    cin >> symbol;                                                                                                                          // store symbol

    cout << "\nPlease choose a number from the table: " << endl;                                                                            // prompt to choose a number from the table
    cin >> choice;                                                                                                                          // store choice

    if(choice == 1 && number[1] == '1')                                                                                                     // checks if the number is 1 if true then change the number to symbol
    {
        number[1] = symbol;
    }
    else if (choice == 2 && number[2] == '2')                                                                                               // checks if the number is 2 if true then change the number to symbol
    {
        number[2] = symbol;
    }
    else if (choice == 3 && number[3] == '3')                                                                                               // checks if the number is 3 if true then change the number to symbol
    {
        number[3] = symbol;
    }
    else if (choice == 4 && number[4] == '4')                                                                                               // checks if the number is 4 if true then change the number to symbol
    {
        number[4] = symbol;
    }
    else if (choice == 5 && number[5] == '5')                                                                                               // checks if the number is 5 if true then change the number to symbol
    {
        number[5] = symbol;
    }
    else if (choice == 6 && number[6] == '6')                                                                                               // checks if the number is 6 if true then change the number to symbol
    {
        number[6] = symbol;
    }
    else if (choice == 7 && number[7] == '7')                                                                                               // checks if the number is 7 if true then change the number to symbol
    {
        number[7] = symbol;
    }
    else if (choice == 8 && number[8] == '8')                                                                                               // checks if the number is 8 if true then change the number to symbol
    {
        number[8] = symbol;
    }
    else if (choice == 9 && number[9] == '9')                                                                                               // checks if the number is 9 if true then change the number to symbol
    {
        number[9] = symbol;
    }
    else 
    {
        cout << "\nNumber is already choosen, please pick a different number." << endl;                                                     // if the number is already choosen then default
    }

    
}


void checkWin()
{
  
    if((number[1] == symbol) &&  (number[2] == symbol) && (number[3] == symbol))                                                            // check wins horizontally for 1, 2, 3
    {
        cout << "\nCongrats " << number[1] << " you won the game! Wohooo :)\n";                                                             // greeting for win
        win = true;                                                                                                                         // set win to true
    }
    else if((number[4] == symbol) &&  (number[5] == symbol) && (number[6] == symbol))                                                       // checks wins horizontally for 4, 5, 6
    {
        cout << "\nCongrats " << number[4] << " you won the game! Wohooo :)\n";                                                             // greeting for win
        win = true;                                                                                                                         // set win to true
    }
    else if((number[7] == symbol) && (number[8] == symbol) && (number[9] == symbol))                                                        // checks wins horizontally for 7, 8, 9
    {
        cout << "\nCongrats " << number[7] << " you won the game! Wohooo :)\n";                                                             // greeting for win
        win = true;                                                                                                                         // set win to true
    }
    else if((number[1] == symbol) &&  (number[4] == symbol) && (number[7] == symbol))                                                       // checks wins vertically for 1, 4, 7
    {
        cout << "\nCongrats " << number[1] << " you won the game! Wohooo :)\n";                                                             // greeting for win
        win = true;                                                                                                                         // set win to true
    }
    else if((number[2] == symbol) &&  (number[5] == symbol) && (number[8] == symbol))                                                       // checks wins vertically for 2, 5, 8
    {
        cout << "\nCongrats " << number[2] << " you won the game! Wohooo :)\n";                                                             // greeting for win
        win = true;                                                                                                                         // set win to true
    }
    else if((number[3] == symbol) &&  (number[6] == symbol) && (number[9] == symbol))                                                       // checks wins vertically for 3, 6, 9
    {
        cout << "\nCongrats " << number[3] << " you won the game! Wohooo :)\n";                                                             // greeting for win
        win = true;                                                                                                                         // set win to true
    }
    else if((number[1] == symbol) &&  (number[5] == symbol) && (number[9] == symbol))                                                       // checks wins diagonally for 1, 5, 9
    {
        cout << "\nCongrats " << number[5] << " you won the game! Wohooo :)\n";                                                             // greeting for win
        win = true;                                                                                                                         // set win to true
    }
    else if((number[3] == symbol) &&  (number[5] == symbol) && (number[7] == symbol))                                                       // checks wins diagonally for 3, 5, 9
    {
        cout << "\nCongrats " << number[5] << " you won the game! Wohooo :)\n";                                                             // greeting for win
        win = true;                                                                                                                         // set win to true
    }
    else                                                                                                                                    // default if no wins
    {
        cout << endl;                                                                                                                       // new line                                           
    }
}


int main()
{

    Title();                                                                                                                                // title function

    if(win == false)                                                                                                                        // if win is false then it will keep the game 
    {
        while(win == false)                                                                                                                 // while loop until win is false
        {
            Display();

            playerChoice();

            checkWin();
        }
        Display();                                                                                                                           // prints the last table
    }
        
    cout << "\nThanks for playing, Have a good day :)\n";						                                                             // ends the game																				

    return 0;
}