/*

    Week 3      Discussion Question 4
    Moksh Shah  02-03-2022
    Select & Replace
    CSC 121

*/

#include <iostream>
using namespace std;


char number[5] = {'1', '2', '3', '4','5'};                                                                                      // global char number variable
int choice;                                                                                                                     // global int choice variable
char x{'X'};                                                                                                                    // global char 'X' variable

void display();                                                                                                                 // void function initializing
void playerChoice();                                                                                                            // void function initializing
void logic();                                                                                                                   // void function initializing 

int main()
{
    
    display();                                                                                                                  // calling the display function to print list of numbers
    playerChoice();                                                                                                             // calling the playerChoice function to prompt the user to choose a number
    logic();                                                                                                                    // using the logic function we change the user input value to X

    display();                                                                                                                  // calling the display function to print list of numbers
    playerChoice();                                                                                                             // calling the playerChoice function to prompt the user to choose a number
    logic();                                                                                                                    // using the logic function we change the user input value to X 

    display();                                                                                                                   
    playerChoice();                                                                                                             
    logic();                                                                                                                    

    display();                                                                                                                  
    playerChoice();                                                                                                             
    logic();

    display();
    playerChoice();
    logic();

    display();                                                                                                                  // lastly, prints all the X's


    return 0;
}

void display()
{
    cout << number[0] << "  " << number[1] << "  " << number[2] << "  " << number[3] << "  " << number[4] << endl;              // lists all 5 numbers
}

void playerChoice()
{
    cout << "Please choose a number from 1 to 5: \n";                                                                           // prompt the user to choose a number from the list
    cin >> choice;                                                                                                              // store the user choice
}

void logic()
{
    if (number[0] == '1' && choice == 1)                                                                                        // if user enter 1 then change 1 to X
    {
        number[0] = x;
    }
    else if (number[1] == '2' && choice == 2)                                                                                   // if user enter 2 then change 2 to X
    {
        number[1] = x;
    }
    else if (number[2] == '3' && choice == 3)                                                                                   // if user enter 3 then change 3 to X
    {
        number[2] = x;
    }
    else if (number[3] == '4' && choice == 4)                                                                                   // if user enter 4 then change 4 to X
    {
        number[3] = x;
    }
    else if (number[4] == '5' && choice == 5)                                                                                   // if user enter 5 then change 5 to X
    {
        number[4] = x;
    }
    else 
    {
        cout << "\nPlease choose a number from 1 to 5" << endl;                                                                 // if user enter any different number then ask to enter a number in between 1 to 5
    }
    
}