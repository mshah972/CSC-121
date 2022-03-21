/*

    Week 9      Dicussion Question 3
    Moksh Shah  03/16/2021
    Rock, Paper, Scissors
    CSC 121

*/

#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>
using namespace std;

enum rps                                                                                                        // enum for rock, paper, scissor
{
    Rock = 1,
    Paper = 2,
    Scissor = 3
};

rps ai{};                                                                                                       // assigning enum to variable ai

void computer(void);                                                                                            // declaration for computer function,

int main()                                                                                                      // main function
{
    int choice = 0;                                                                                             // int variable for choice

    cout << "\n\t\t\tROCK, PAPER, SCISSORS\n"
         << endl;

    cout << "RULES : ( When it's time for player to choose please enter \"1 for Rock\", \"2 for Paper\", and \"3 for Scissor\")" << endl;

    cout << "\n\n\t\t\tLETS START THE GAME\n"
         << endl;

    for (int i = 0; i < 5; i++)                                                                                 // for loop to run the game 5 time
    {
        cout << "\nPlease enter your choice (1 for Rock), (2 for Paper), and (3 for Scissor): ";                // prompt
        cin >> choice;

        if (choice == 1)                                                                                        // if player choose 1 
        {
            cout << "\n\nYou choose " << choice << " which means Rock\n"
                 << endl;
        }
        else if (choice == 2)                                                                                   // if player choose 2
        {
            cout << "\n\nYou choose " << choice << " which means Paper\n"
                 << endl;
        }
        else if (choice == 3)                                                                                   // if player choose 3
        {
            cout << "\n\nYou choose " << choice << " which means Scissor\n"
                 << endl;
        }
        else                                                                                                    // if not from 1 to 3 then choose again                                                                             
        {
            cout << "\n\nPlease choose from 1 to 3: ";
            cin >> choice;
        }

        cout << "\nLet's wait for computer to choose";

        for(int i = 0; i < 3; i++)                                          
        {
            cout << ".";
            Sleep(1000);
        }

        cout << "\n" << endl;

        computer();                                                                                             // calling computer fucntion for computer choice

        cout << "\n\tLET'S SEE WHO IS THE WINNER";

        for(int i = 0; i < 3; i++)
        {
            cout << ".";
            Sleep(1000);
        }

        cout << "\n" << endl;


        if ((choice == Rock && ai == Paper) || (choice == Paper && choice == Scissor) || (choice == Scissor && ai == Rock))     // if player choice is rock and ai choice is paper, player choice is paper and scissor, player choice is scissor and ai choice is rock
        {
            cout << "\n\n\tSorry not a winner this time!!" << endl;
        }
        else if (choice == ai)                                                                                  // if player choice and ai choice is equal
        {
            cout << "\n\n\tIt's a tie" << endl;
        }
        else                                                                                                    // else player wins
        {
            cout << "\n\n\tCongrats, you are the real champion of Rock, Paper, Scissors!" << endl;
        }
    }

    return 0;
}

void computer()                                                                                                 // function for computer
{
    int choice;                                                                                                 // int choice for computer

    choice = (rand() % 4);                                                                                      // generating random number 1 to 3

    if (choice == 1)                                                                                            // if choice is 1
    {
        ai = Rock;                                                                                              // then rock
        cout << "\nAI choosed Rock\n";
    }
    else if (choice == 2)                                                                                       // if choice is 2
    {
        ai = Paper;                                                                                             // then paper
        cout << "\nAI choosed Paper\n";
    }
    else if (choice == 3)                                                                                       // if choice is 3
    {
        ai = Scissor;                                                                                           // then scissor
        cout << "\nAI choosed Scissor\n";
    }
}