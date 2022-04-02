/*

    Moksh Shah      CSC 121
    TicTacToe Project

*/
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
using namespace std;

//string array for the board to be used in the game and the board to be used in the display function
string board[3][3] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
string board2[3][3] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

//string array for the player's and computer's moves
string playerMoves[9] = { "", "", "", "", "", "", "", "", "" };
string computerMoves[9] = { "", "", "", "", "", "", "", "", "" };

//string varible for play again
string playAgain;

//function prototypes for the game functions
void displayBoard();
void player();
void computer();
void checkWin();
void checkTie();
void anotherTurn();

//string choice for o or x
string choice;

//int for score keeping and the number of games played and the number of games won by the player and computer respectively 
int score = 0;
int gamesPlayed = 0;
int gamesWon = 0;


int protectData(string prompt)
{
    int temp;
    cout << prompt;
    cin >> temp;
    while (temp < 1 || temp > 9 || cin.fail())
    {
        while(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << prompt;
            cin >> temp;
        }
        
        cout << "Invalid input. Please enter a number between 1 and 9." << endl;
        cin >> temp;
    }

    return temp;
}

void displayBoard()
{
    
    cout << "  " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "  " << "-----------" << endl;
    cout << "  " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "  " << "-----------" << endl;
    cout << "  " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;

    cout << endl;
    
}

void player()
{
    int row, column;
    bool valid = false;
    while (!valid)
    {
        cout << "Enter the row number: ";
        row = protectData("");
        cout << "Enter the column number: ";
        column = protectData("");

        if (board[row - 1][column - 1] != "X" && board[row - 1][column - 1] != "O")
        {
            board[row - 1][column - 1] = "X";
            playerMoves[gamesPlayed] = to_string(row) + to_string(column);
            valid = true;
        }
        else
        {
            cout << "That space is already taken. Please try again." << endl;
            valid = false;
        }
    }
}

void computer()
{
    int row, column;
    bool valid = false;
    while (!valid)
    {
        row = rand() % 3 + 1;
        column = rand() % 3 + 1;

        if (board[row - 1][column - 1] != "X" && board[row - 1][column - 1] != "O")
        {
            board[row - 1][column - 1] = "O";
            computerMoves[gamesPlayed] = to_string(row) + to_string(column);
            valid = true;
        }
    }
}

void checkWin()
{

    cout << endl;

    if (board[0][0] == "X" && board[0][1] == "X" && board[0][2] == "X")
    {
        cout << "\n\t\tPLAYER WINS!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[1][0] == "X" && board[1][1] == "X" && board[1][2] == "X")
    {
        cout << "\n\t\tPLAYER WINS!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[2][0] == "X" && board[2][1] == "X" && board[2][2] == "X")
    {
        cout << "\n\t\tPLAYER WINS!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    //check for vertical wins
    else if (board[0][0] == "X" && board[1][0] == "X" && board[2][0] == "X")
    {
        cout << "\n\t\tPLAYER WINS!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[0][1] == "X" && board[1][1] == "X" && board[2][1] == "X")
    {
        cout << "\n\t\tPLAYER WINS!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[0][2] == "X" && board[1][2] == "X" && board[2][2] == "X")
    {
        cout << "\n\t\tPLAYER WINS!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    //check for diagonal wins
    else if (board[0][0] == "X" && board[1][1] == "X" && board[2][2] == "X")
    {
        cout << "\n\t\tPLAYER WINS!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[0][2] == "X" && board[1][1] == "X" && board[2][0] == "X")
    {
        cout << "\n\t\tPLAYER WINS!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    //check for horizontal wins
    else if (board[0][0] == "O" && board[0][1] == "O" && board[0][2] == "O")
    {
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[1][0] == "O" && board[1][1] == "O" && board[1][2] == "O")
    {
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[2][0] == "O" && board[2][1] == "O" && board[2][2] == "O")
    {
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    //check for vertical wins
    else if (board[0][0] == "O" && board[1][0] == "O" && board[2][0] == "O")
    {
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[0][1] == "O" && board[1][1] == "O" && board[2][1] == "O")
    {
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[0][2] == "O" && board[1][2] == "O" && board[2][2] == "O")
    {
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    //check for diagonal wins
    else if (board[0][0] == "O" && board[1][1] == "O" && board[2][2] == "O")
    {
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
    else if (board[0][2] == "O" && board[1][1] == "O" && board[2][0] == "O")
    {
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
}

void checkTie()
{
    if (gamesPlayed == 9)
    {
        cout << "It's a tie!" << endl;
        gamesPlayed++;
        displayBoard();
        anotherTurn();
    }
}

void anotherTurn()
{
    cout << "\n\n\t\tWould you like to play again? (Y/N): ";
    cin >> playAgain;
    if (playAgain == "Y" || playAgain == "y")
    {
        gamesWon++;
        gamesPlayed++;
        board[0][0] = "1";
        board[0][1] = "2";
        board[0][2] = "3";
        board[1][0] = "4";
        board[1][1] = "5";
        board[1][2] = "6";
        board[2][0] = "7";
        board[2][1] = "8";
        board[2][2] = "9";
        displayBoard();
    }
    else
    {
        cout << "\n\n\t\tTHANKS FOR PLAYING!" << endl;
        exit(0);
    }
}

int main()
{
    srand(time(NULL));
    int choice;
    bool valid = false;
    while (!valid)
    {
        cout << "\n\t\tWelcome to Tic-Tac-Toe!" << endl;
        cout << "\n\t1. Play against the computer" << endl;
        cout << "\t2. Play against another player" << endl;
        cout << "\t3. Quit" << endl;
        cout << "\n\tEnter your choice: ";
        cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3)
        {
            valid = true;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    system("cls");

    if (choice == 1)
    {
        while (gamesPlayed < 9)
        {
            
            cout << "\n\t\tGames played: " << gamesPlayed << endl;
            
            cout << "\n\t\tPlayer's turn" << "\tCurrent Score: " << score << endl;
            
            displayBoard();
            player();

            cout << "\nLet's see if the computer can win";
            for(int i = 0; i < 3; i++)
            {
                Sleep(1000);
                cout << ".";
            }

            checkTie();
            checkWin();

            cout << "\n\t\tComputer's turn" << endl;
            computer();
            displayBoard();

            cout << "\nLet's see if player can beat this move";
            
            for(int i = 0; i < 3; i++)
            {
                Sleep(1000);
                cout << ".";
            }
    
            checkTie();
            checkWin();

            system("cls");
        }
    }
    else if (choice == 2)
    {
        while (gamesPlayed < 9)
        {
            displayBoard();
            player();
            checkWin();
            checkTie();
            player();
            checkWin();
            checkTie();
        }
    }
    else if (choice == 3)
    {
        cout << "Thanks for playing!" << endl;
        exit(0);
    }
    return 0;
}
