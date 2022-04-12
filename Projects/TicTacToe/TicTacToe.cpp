/*

    Moksh Shah      CSC 121
    TicTacToe Project

*/
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <fstream>
using namespace std;

//string array for the board to be used in the game and the board to be used in the display function
string board[3][3] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
string board2[3][3] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };

//string array for the player's and computer's moves
string playerMoves[9] = { "", "", "", "", "", "", "", "", "" };
string computerMoves[9] = { "", "", "", "", "", "", "", "", "" };

//string varible for play again
string playAgain;
string whoWon;

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
int gamesTied = 0;

time_t now = time(0);                                                                                       //time_t is a type defined in time.h
tm *ltm = localtime(&now);                                                                                  //tm is a type defined in time.h
string currentTime = asctime(ltm);                                                                          //asctime is a function defined in time.h
 

int protectData(string prompt)                                                                                  //function to protect the data entered by the user
{
    int temp;                                                                                                   //int variable to store the data entered by the user
    cout << prompt;                                                                                             //prompt the user to enter the data
    cin >> temp;                                                                                                //store the data entered by the user                                            
    while (temp < 1 || temp > 3 || cin.fail())                                                                  //while the data entered by the user is not valid
    {
        while(cin.fail())                                                                                       //while the data entered by the user is not an integer
        {
            cin.clear();                                                                                        //clear the error flag                          
            cin.ignore();                                                                                       //ignore the rest of the input
            cout << prompt;                                                                                     //prompt the user to enter the data again
            cin >> temp;                                                                                        //store the data entered by the user
        }
        
        cout << "\nInvalid input. Please enter a number between 1 and 3: ";                                     //display an error message
        cin >> temp;                                                                                            //store the data entered by the user 
        cout << endl;                                       
    }

    return temp;                                                                                                //return the data entered by the user                               
}

void displayBoard()                                                                                             //function to display the board
{
    cout << endl;                                                                                               //display a new line
    cout << endl;                                                                                               //display a new line
    cout << "  " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;                        //display the first row of the board        
    cout << "-------------" << endl;                                                                                          
    cout << "  " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;                        //display the second row of the board
    cout << "-------------" << endl;
    cout << "  " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;                        //display the third row of the board

    cout << endl;                                                                                               //display a blank line                            
    
}

void player()                                                                                                   //function to take the player's move
{
    int row, column;                                                                                            //int variables to store the row and column of the player's move                                    
    bool valid = false;                                                                                         //bool variable to check if the player's move is valid
    while (!valid)                                                                                              //while vaild is not true
    {
        cout << "\nEnter the row number: ";                                                                       //prompt the user to enter the row number
        row = protectData("");                                                                                  //store the row number entered by the user                                    
        cout << "\nEnter the column number: ";                                                                    //prompt the user to enter the column number
        column = protectData("");                                                                               //store the column number entered by the user

        if (board[row - 1][column - 1] != "X" && board[row - 1][column - 1] != "O")                             //if the player's move is vaild
        {
            board[row - 1][column - 1] = "X";                                                                   //store the player's move in the board
            playerMoves[gamesPlayed] = to_string(row) + to_string(column);                                      //store the player's move in the playerMoves array
            valid = true;                                                                                       //set valid to true
        }
        else                                                                                                    //if the player's move is not vaild
        {
            cout << "That space is already taken. Please try again." << endl;                                   //display an error message         
            valid = false;                                                                                      //set valid to false
        }
    }
}

void computer()                                                                                                 //function to take the computer's move
{
    int row, column;                                                                                            //int variables to store the row and column of the computer's move                              
    bool valid = false;                                                                                         //bool variable to check if the computer's move is valid
    while (!valid)                                                                                              //while vaild is not ture
    {
        row = rand() % 3 + 1;                                                                                   //generate a random number between 1 and 3
        column = rand() % 3 + 1;                                                                                //generate a random number between 1 and 3

        if (board[row - 1][column - 1] != "X" && board[row - 1][column - 1] != "O")                             //if the computer's move is vaild
        {
            board[row - 1][column - 1] = "O";                                                                   //store the computer's move in the board                                   
            computerMoves[gamesPlayed] = to_string(row) + to_string(column);                                    //store the computer's move in the computerMoves array
            valid = true;                                                                                       //set valid to true
        }
    }
}

void checkWin()                                                                                                 //function to check if the game has been won
{

    cout << endl;                                                                                               //display a blank line

    if (board[0][0] == "X" && board[0][1] == "X" && board[0][2] == "X")                                         //if the first row of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                   //display a message saying the player wins                                 
        score += 100;                                                                                           //increase the score by 100
        gamesWon++;                                                                                             //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                          //increase the number of games played by 1
        whoWon = "Player";                                                                                      //set whoWon to "Player"
        
        ofstream outFile;                                                                                       //create an output file stream
        outFile.open("TTTwins.txt", ios::app);                                                                  //open the output file stream
        outFile << "Game Played on " << currentTime << endl;                                                    //write the current time to the output file
        outFile << "Game Number: " << gamesPlayed << endl;                                                      //write the game number to the output file
        outFile << whoWon << " has won this game!" << endl;                                                     //write the name of the player who won the game to the output file
        outFile << "The Score is: " << score << endl;                                                           //write the score to the output file
        outFile << "The number of games won is: " << gamesWon << endl;                                          //write the number of games won to the output file
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;                           //write the number of games lost to the output file
        outFile << "The number of games played is: " << gamesPlayed << endl;                                    //write the number of games played to the output file
        outFile << "The number of games tied is: " << gamesTied << endl;                                //write the number of games tied to the output file
        outFile << "This was a Horizontal Win by " << whoWon << "!\n" << endl;
        outFile.close();                                                                                        //close the output file stream                          

        displayBoard();                                                                                         //display the board
        anotherTurn();                                                                                          //call anotherTurn function
        
    }
    else if (board[1][0] == "X" && board[1][1] == "X" && board[1][2] == "X")                                    //if the second row of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                   //display a message saying the player wins
        score += 100;                                                                                           //increase the score by 100
        gamesWon++;                                                                                             //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                          //increase the number of games played by 1
        whoWon = "Player";                                                                                      //set whoWon to "Player"
        
        ofstream outFile;                                                                                       //create an output file stream
        outFile.open("TTTwins.txt", ios::app);                                                                  //open the output file stream
        outFile << "Game Played on " << currentTime << endl;                                                    //write the current time to the output file
        outFile << "Game Number: " << gamesPlayed << endl;                                                      //write the game number to the output file                                         
        outFile << whoWon << " has won this game!" << endl;                                                     //write the name of the player who won the game to the output file
        outFile << "The Score is: " << score << endl;                                                           //write the score to the output file
        outFile << "The number of games won is: " << gamesWon << endl;                                          //write the number of games won to the output file
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;                           //write the number of games lost to the output file
        outFile << "The number of games played is: " << gamesPlayed << endl;                                    //write the number of games played to the output file
        outFile << "The number of games tied is: " << gamesTied << endl;                                //write the number of games tied to the output file
        outFile << "This was a Horizontal Win by " << whoWon << "!\n" << endl;
        outFile.close();                                                                                        //close the output file stream

        displayBoard();                                                                                         //display the board
        anotherTurn();                                                                                          //call anotherTurn function
        
    }
    else if (board[2][0] == "X" && board[2][1] == "X" && board[2][2] == "X")                                    //if the third row of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                   //display a message saying the player wins
        score += 100;                                                                                           //increase the score by 100
        gamesWon++;                                                                                             //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                          //increase the number of games played by 1
        whoWon = "Player";                                                                                      //set whoWon to "Player"
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;                                                   
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Horizontal Win by " << whoWon << "!\n" << endl;                      
        outFile.close();

        displayBoard();                                                                                         //display the board
        anotherTurn();                                                                                          //call anotherTurn function
        
    }
    //check for vertical wins
    else if (board[0][0] == "X" && board[1][0] == "X" && board[2][0] == "X")                                    //if the first column of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                   //display a message saying the player wins
        score += 100;                                                                                           //increase the score by 100
        gamesWon++;                                                                                             //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                          //increase the number of games played by 1
        whoWon = "Player";                                                                                      //set whoWon to "Player"
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;                                                   
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Vertical Win by " << whoWon << "!\n" << endl;   
        outFile.close();

        displayBoard();                                                                                         //display the board
        anotherTurn();                                                                                          //call anotherTurn function
        
    }
    else if (board[0][1] == "X" && board[1][1] == "X" && board[2][1] == "X")                                    //if the second column of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                   //display a message saying the player wins
        score += 100;                                                                                           //increase the score by 100
        gamesWon++;                                                                                             //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                          //increase the number of games played by 1
        whoWon = "Player";                                                                                      //set whoWon to "Player"
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;                                                    
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Vertical Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();                                                                                         //display the board
        anotherTurn();                                                                                          //call anotherTurn function
        
    }
    else if (board[0][2] == "X" && board[1][2] == "X" && board[2][2] == "X")                                    //if the third column of the board is filled with X's
    {   
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                   //display a message saying the player wins
        score += 100;                                                                                           //increase the score by 100
        gamesWon++;                                                                                             //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                          //increase the number of games played by 1
        whoWon = "Player";                                                                                      //set whoWon to "Player"
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Vertical Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();                                                                                         //display the board
        anotherTurn();                                                                                          //call anotherTurn function
        
    }
    //check for diagonal wins
    else if (board[0][0] == "X" && board[1][1] == "X" && board[2][2] == "X")                                    //if the top left to bottom right diagonal of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;
        score += 100;
        gamesWon++;
        gamesPlayed++;
        whoWon = "Player";
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Diagonal Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
    }   
    else if (board[0][2] == "X" && board[1][1] == "X" && board[2][0] == "X")                                    //if the top right to bottom left diagonal of the board is filled wit X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;
        score += 100;
        gamesWon++;
        gamesPlayed++;
        whoWon = "Player";
        
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Diagonal Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
        
    }
    //check for horizontal wins
    else if (board[0][0] == "O" && board[0][1] == "O" && board[0][2] == "O")                                    //similar for computer's move to check win
    {
        system("color 4");                                                                                      //set the console text color to red
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score -= 50;
        gamesPlayed++;
        whoWon = "Computer";
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Horizontal Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
        
    }
    else if (board[1][0] == "O" && board[1][1] == "O" && board[1][2] == "O")
    {
        system("color 4");
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score -= 50;
        gamesPlayed++;
        whoWon = "Computer";
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Horizontal Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
        
    }
    else if (board[2][0] == "O" && board[2][1] == "O" && board[2][2] == "O")
    {
        system("color 4");
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score -= 50;
        gamesPlayed++;
        whoWon = "Computer";
        
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Horizontal Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
        
    }
    //check for vertical wins
    else if (board[0][0] == "O" && board[1][0] == "O" && board[2][0] == "O")
    {
        system("color 4");
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score -= 50;
        gamesPlayed++;
        whoWon = "Computer";
        
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Vertical Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
        
    }
    else if (board[0][1] == "O" && board[1][1] == "O" && board[2][1] == "O")
    {
        system("color 4");
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score -= 50;
        gamesPlayed++;
        whoWon = "Computer";
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Vertical Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
        
    }
    else if (board[0][2] == "O" && board[1][2] == "O" && board[2][2] == "O")
    {
        system("color 4");
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score -= 50;
        gamesPlayed++;
        whoWon = "Computer";
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Vertical Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
        
    }
    //check for diagonal wins
    else if (board[0][0] == "O" && board[1][1] == "O" && board[2][2] == "O")
    {
        system("color 4");
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score -= 50;
        gamesPlayed++;
        whoWon = "Computer";
        
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Diagonal Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
        
    }
    else if (board[0][2] == "O" && board[1][1] == "O" && board[2][0] == "O")
    {
        system("color 4");
        cout << "\n\t\tCOMPUTER WINS!" << endl;
        score -= 50;
        gamesPlayed++;
        whoWon = "Computer";
         
        ofstream outFile;
        outFile.open("TTTwins.txt", ios::app);
        outFile << "Game Played on " << currentTime << endl;
        outFile << "Game Number: " << gamesPlayed << endl;
        outFile << whoWon << " has won this game!" << endl;
        outFile << "The Score is: " << score << endl;
        outFile << "The number of games won is: " << gamesWon << endl;
        outFile << "The number of games lost is: " << gamesWon - gamesPlayed << endl;
        outFile << "The number of games played is: " << gamesPlayed << endl;
        outFile << "The number of games tied is: " << gamesTied << endl;
        outFile << "This was a Diagonal Win by " << whoWon << "!\n" << endl;
        outFile.close();

        displayBoard();
        anotherTurn();
        
    }

}

void checkTie()                                                                                                 //function to check for a tie
{
    int tie = 0;                                                                                                //variable to check if there is a tie
    for (int i = 0; i < 3; i++)                                                                                 //for loop to check each row
    {
        for (int j = 0; j < 3; j++)                                                                             //for loop to check each column
        {
            if (board[i][j] == " ")                                                                             //if the board is not filled
            {
                tie = 1;                                                                                        //there is a tie
                cout << "\n\n\t\tTIE!" << endl;                                                                 //display a message saying the game is a tie
                gamesPlayed++;                                                                                  //increase the number of games played by 1
                gamesTied++;                                                                                    //increase the number of games tied by 1
                displayBoard();                                                                                 //display the board
                anotherTurn();                                                                                  //call anotherTurn function
            }
        }
    }
}                                                                                 


void anotherTurn()                                                                                              //function to ask the user if they want to play another game
{
    cout << "\n\n\t\tWould you like to play again? (Y/N): ";                                                    //ask the user if they want to play another game
    cin >> playAgain;                                                                                           //get the user's response
    if (playAgain == "Y" || playAgain == "y")                                                                   //if user response is y
    {
        system("color ");                                                                                      //set the console text color to whites
        board[0][0] = "1";                                                                                      //reset the board                                  
        board[0][1] = "2";
        board[0][2] = "3";
        board[1][0] = "4";
        board[1][1] = "5";
        board[1][2] = "6";
        board[2][0] = "7";
        board[2][1] = "8";
        board[2][2] = "9";
        displayBoard();                                                                                         //display the board
    }
    else                                                                                                        //if user response is n
    {
        system("cls");                                                                                          //clear the screen
        system("color 3");                                                                                      //change the text color to green
        
        cout << "\n\n\tYour score is: " << score << endl;                                                       //display the user's score
        cout << "\tGames won: " << gamesWon << endl;                                                            //display the number of games won
        cout << "\tGames played: " << gamesPlayed << endl;                                                      //display the number of games played
        cout << "\tGames lost: " << gamesPlayed - gamesWon << endl;                                             //display the number of games lost
        cout << "\tPercentage of games won: " << (double)gamesWon / gamesPlayed * 100 << "%" << endl;           //display the percentage of games won

        cout << "\n\n\t\tTHANKS FOR PLAYING!" << endl;                                                          //display a message saying the game is over
        cout << "\n" << endl;

        // ofstream outFile;
        // outFile.open("TTWins.txt");
        // outFile << whoWon << " Won This game" << endl;
        // outFile << "Player Score: " << score << endl;
        // outFile << "Games Won: " << gamesWon << endl;
        // outFile << "Games Tie: " << gamesPlayed - gamesWon << endl;
        // outFile << "Games Played: " << gamesPlayed  << "\n" << endl;
        // outFile.close();
        
        exit(0);                                                                                                //exit the program
    }
}

int main()                                                                                                      //this is my main function
{
    srand(time(NULL));                                                                                          //seed the random number generator
    int choice;                                                                                                 //variable to store the user's choice
    bool valid = false;                                                                                         //variable to check if the user's choice is valid
    while (!valid)                                                                                              //if vaild is not true
    {
        cout << "\n\t\tWelcome to Tic-Tac-Toe!" << endl;                                                        //display a welcome message
        cout << "\n\t1. Play against the computer" << endl;                                                     //display the options
        cout << "\t2. Play against another player" << endl;                                                     
        cout << "\t3. Quit" << endl;
        cout << "\n\tEnter your choice: ";                                                                      //ask the user to enter their choice
        cin >> choice;                                                                                          //get the user's choice
        if (choice == 1 || choice == 2 || choice == 3)                                                          //if the user's choice is vaild
        {
            valid = true;                                                                                       //set valid to true
        }   
        else                                                                                                    //if the user's choice is not vaild
        {
            cout << "Invalid choice. Please try again." << endl;                                                //display an error message
        }
    }

    system("cls");                                                                                              //clear the screen

    if (choice == 1)                                                                                            //if user choice is 1
    {
        while (gamesPlayed < 9)                                                                                 //while the number of games played is less than 9
        {
            
            cout << "\n\t\tGames played: " << gamesPlayed << endl;                                              //display the number of games played
            
            cout << "\n\t\tPlayer's turn" << "\tCurrent Score: " << score << endl;                              //display the current score
            
            displayBoard();                                                                                     //display the board
            system("color 2");
            player();                                                                                           //call player function
            displayBoard();                                                                                     //display the board
            cout << "\nLet's see if the computer can win";                                                      //display a message saying the program is checking for a win
            for(int i = 0; i < 3; i++)                                                                          //for loop to display ... so the user knows the program is working
            {
                Sleep(1000);                                                                                    //sleep for 1 second                                    
                cout << ".";                                                                                    //display a dot
            }
            checkTie();                                                                                         //call checkTie function
            checkWin();                                                                                         //call checkWin function

            system("color 4");

            cout << "\n\t\tComputer's turn" << endl;                                                            //display a message saying the computer's turn
            computer();                                                                                         //call computer function
            displayBoard();                                                                                     //display the board

            cout << "\nLet's see if player can beat this move";                                                 //display a message saying the program is checking for a win
            
            for(int i = 0; i < 3; i++)                                                                          //for loop to display ... so the user knows the program is working
            {
                Sleep(1000);                                                                                    //sleep for 1 second                                            
                cout << ".";                                                                                    //display a dot
            }
    
            checkTie();                                                                                         //call checkTie function
            checkWin();                                                                                         //call checkWin function

            system("cls");                                                                                      //clear the screen
        }
    }
    else if (choice == 2)                                                                                       //if user choice is 2
    {
        while (gamesPlayed < 9)                                                                                 //while the number of games played is less than 9
        {
            cout << "\n\t\tGames played: " << gamesPlayed << endl;                                              //display the number of games played
            cout << "\n\t\tPlayer 1's turn" << "\tCurrent Score: " << score << endl;                            //display the current score
            displayBoard();                                                                                     //display the board
            player();                                                                                           //call player function
            checkTie();                                                                                         //call checkTie function
            checkWin();                                                                                         //call checkWin function
            cout << "\n\t\tPlayer 2's turn" << endl;                                                            //display a message saying the computer's turn
            player();                                                                                           //call player function
            displayBoard();                                                                                     //display the board
            checkTie();                                                                                         //call checkTie function
            checkWin();                                                                                         //call checkWin function
            system("cls");                                                                                      //clear the screen
        }
    }
    else if (choice == 3)                                                                                       //if user choice is 3
    {
        system("color 09");                                                                                     //change the text color to green
        cout << "\n\n\t\tTHANKS FOR PLAYING!" << endl;                                                          //display a message saying the game is over
        cout << endl;
        exit(0);                                                                                                //exit the program
    }
    
    return 0;
}
