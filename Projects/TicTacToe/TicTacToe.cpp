/*

    Moksh Shah      CSC 121
    TicTacToe Project

*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//string array for the board to be used in the game and the board to be used in the display function
string board[3][3] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
string board2[3][3] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

//string array for the player's and computer's moves
string playerMoves[9] = { "", "", "", "", "", "", "", "", "" };
string computerMoves[9] = { "", "", "", "", "", "", "", "", "" };

//function prototypes for the game functions
void displayBoard();
void player();
void computer();
void checkWin();
void checkTie();


//string choice for o or x
string choice;

//int for score keeping and the number of games played and the number of games won by the player and computer respectively 
int score = 0;
int gamesPlayed = 0;
int gamesWon = 0;


int protectDate(string prompt)
{
    int temp;
    cout << prompt;
    cin >> temp;
    while (temp < 1 || temp > 9 || cin.fail())
    {
        while(cin.fail())
        {
            cin.clear();
            cin.ignore(256, '\n');
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
    cout << "  " << "---|---|---" << endl;
    cout << "  " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "  " << "---|---|---" << endl;
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
        row = protectDate("");
        cout << "Enter the column number: ";
        column = protectDate("");
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
    //check for horizontal wins
    if (board[0][0] == "X" && board[0][1] == "X" && board[0][2] == "X")
    {
        cout << "Player wins!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[1][0] == "X" && board[1][1] == "X" && board[1][2] == "X")
    {
        cout << "Player wins!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[2][0] == "X" && board[2][1] == "X" && board[2][2] == "X")
    {
        cout << "Player wins!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    //check for vertical wins
    else if (board[0][0] == "X" && board[1][0] == "X" && board[2][0] == "X")
    {
        cout << "Player wins!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[0][1] == "X" && board[1][1] == "X" && board[2][1] == "X")
    {
        cout << "Player wins!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[0][2] == "X" && board[1][2] == "X" && board[2][2] == "X")
    {
        cout << "Player wins!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    //check for diagonal wins
    else if (board[0][0] == "X" && board[1][1] == "X" && board[2][2] == "X")
    {
        cout << "Player wins!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[0][2] == "X" && board[1][1] == "X" && board[2][0] == "X")
    {
        cout << "Player wins!" << endl;
        score++;
        gamesWon++;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    //check for horizontal wins
    else if (board[0][0] == "O" && board[0][1] == "O" && board[0][2] == "O")
    {
        cout << "Computer wins!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[1][0] == "O" && board[1][1] == "O" && board[1][2] == "O")
    {
        cout << "Computer wins!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[2][0] == "O" && board[2][1] == "O" && board[2][2] == "O")
    {
        cout << "Computer wins!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    //check for vertical wins
    else if (board[0][0] == "O" && board[1][0] == "O" && board[2][0] == "O")
    {
        cout << "Computer wins!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[0][1] == "O" && board[1][1] == "O" && board[2][1] == "O")
    {
        cout << "Computer wins!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[0][2] == "O" && board[1][2] == "O" && board[2][2] == "O")
    {
        cout << "Computer wins!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    //check for diagonal wins
    else if (board[0][0] == "O" && board[1][1] == "O" && board[2][2] == "O")
    {
        cout << "Computer wins!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
    else if (board[0][2] == "O" && board[1][1] == "O" && board[2][0] == "O")
    {
        cout << "Computer wins!" << endl;
        score--;
        gamesPlayed++;
        displayBoard();
        exit(0);
    }
}

void checkTie()
{
    if (gamesPlayed == 9)
    {
        cout << "It's a tie!" << endl;
        gamesPlayed++;
        displayBoard();
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
        cout << "Welcome to Tic-Tac-Toe!" << endl;
        cout << "1. Play against the computer" << endl;
        cout << "2. Play against another player" << endl;
        cout << "3. Quit" << endl;
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
    if (choice == 1)
    {
        while (gamesPlayed < 9)
        {
            displayBoard();
            player();
            checkWin();
            checkTie();
            computer();
            checkWin();
            checkTie();
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
