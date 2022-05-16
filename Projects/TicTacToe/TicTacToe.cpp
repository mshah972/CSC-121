/*

    Moksh Shah      CSC 121
    TicTacToe Project

*/
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <fstream>
#include "TTT.h"
#include "move.h"
using namespace std;

//string array for the board to be used in the game and the board to be used in the display function
string board[10] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

//string array for the player's and computer's moves
string playerMoves[9] = { "", "", "", "", "", "", "", "", "" };
string player2Moves[9] = { "", "", "", "", "", "", "", "", "" };
string computerMoves[9] = { "", "", "", "", "", "", "", "", "" };

//string varible for play again
string playAgain;
string whoWon;
string howWon;

//vector to record player moves and computer moves
vector<int> playerMovesVector;
vector<int> computerMovesVector;

//function prototypes for the game functions
void displayBoard();
void player();
void computer();
void checkWin();
void checkTie();
void anotherTurn();
void player2();

//string choice for o or x
string choice;

//int for score keeping and the number of games played and the number of games won by the player and computer respectively 
int score = 0;
int gamesPlayed = 0;
int gamesWon = 0;
int gamesTied = 0;
int p2Score = 0;
int turns = 0;
int dTurn = 9;  

time_t now = time(0);                                                                                               //time_t is a type defined in time.h
tm *ltm = localtime(&now);                                                                                          //tm is a type defined in time.h
string currentTime = asctime(ltm);                                                                                  //asctime is a function defined in time.h


//declare the TTT object
TTT ttt;


//declare the move object
Move moves;                                                                                                         //declare the move object

int protectData(string prompt)                                                                                      //function to protect the data entered by the user
{
    int temp;                                                                                                       //int variable to store the data entered by the user
    cout << prompt;                                                                                                 //prompt the user to enter the data
    cin >> temp;                                                                                                    //store the data entered by the user                                            
    while (temp < 1 || temp > 9 || cin.fail())                                                                      //while the data entered by the user is not valid
    {
        while(cin.fail())                                                                                           //while the data entered by the user is not an integer
        {
            cin.clear();                                                                                            //clear the error flag                          
            cin.ignore();                                                                                           //ignore the rest of the input
            cout << prompt;                                                                                         //prompt the user to enter the data again
            cin >> temp;                                                                                            //store the data entered by the user
        }
        
        cout << "\nInvalid input. Please enter a number between 1 and 9: ";                                         //display an error message
        cin >> temp;                                                                                                //store the data entered by the user 
        cout << endl;                                       
    }

    playerMovesVector.push_back(temp);                                                                              //push the data entered by the user into the vector

    return temp;                                                                                                    //return the data entered by the user                               
}

void displayBoard()                                                                                                 //function to display the board
{
    cout << endl;                                                                                                   //display a new line
    cout << endl;                                                                                                   //display a new line
    cout << "  " << board[1] << " | " << board[2] << " | " << board[3] << endl;                                     //display the first row of the board        
    cout << "-------------" << endl;                                                                                          
    cout << "  " << board[4] << " | " << board[5] << " | " << board[6] << endl;                                     //display the second row of the board
    cout << "-------------" << endl;
    cout << "  " << board[7] << " | " << board[8] << " | " << board[9] << endl;                                     //display the third row of the board

    cout << endl;                                                                                                   //display a blank line                            
    
}

void player()                                                                                                       //function to take the player's move
{
    int uchoice;                                                                                                    //int variables to store the row and column of the player's move                                    
    bool valid = false;                                                                                             //bool variable to check if the player's move is valid
    while (!valid)                                                                                                  //while vaild is not true
    {
        cout << "\nPlayer, please enter your move: ";                                                               //prompt the player to enter their move
        uchoice = protectData("");                                                                                  //store the player's move in the uchoice variable

        if (board[uchoice] != "X" && board[uchoice] != "O")                                                         //if the player's move is vaild
        {
            board[uchoice] = "X";                                                                                   //store the player's move in the board
            playerMoves[gamesPlayed] = to_string(uchoice);                                                          //store the player's move in the playerMoves array
            valid = true;                                                                                           //set valid to true
        }
        else                                                                                                        //if the player's move is not vaild
        {
            cout << "That space is already taken. Please try again." << endl;                                       //display an error message         
            valid = false;                                                                                          //set valid to false
        }

        moves.setUserMove(uchoice);                                                                                 //call the setUserInput function in the moves object
        moves.writeToFile();                                                                                        //call the writeToFile function in the moves object
    }
}

void player2()                                                                                                      //function to take the player's move
{
    int u2choice;                                                                                                   //int variables to store the row and column of the player's move                                    
    bool valid = false;                                                                                             //bool variable to check if the player's move is valid
    while (!valid)                                                                                                  //while vaild is not true
    {
        cout << "\nPlayer 2, please enter your move: ";                                                             //prompt the user to enter the row number
        u2choice = protectData("");                                                                                 //store the row number entered by the user

        if (board[u2choice] != "X" && board[u2choice] != "O")                                                       //if the player's move is vaild
        {
            board[u2choice] = "O";                                                                                  //store the player's move in the board
            player2Moves[gamesPlayed] = to_string(u2choice);                                                         //store the player's move in the playerMoves array
            valid = true;                                                                                           //set valid to true
        }
        else                                                                                                        //if the player's move is not vaild
        {
            cout << "That space is already taken. Please try again." << endl;                                       //display an error message         
            valid = false;                                                                                          //set valid to false
        }

        moves.setUser2Move(u2choice);                                                                               //call the setUserInput function in the moves object
        moves.writeToFile();                                                                                        //call the writeToFile function in the moves object
    }
}


void computer()                                                                                                     //function to take the computer's move
{
    int compChoice;                                                                                                 //int variables to store the row and column of the computer's move                              
    bool valid = false;                                                                                             //bool variable to check if the computer's move is valid
    while (!valid)                                                                                                  //while vaild is not ture
    {
        compChoice = rand() % 9 + 1;                                                                                //generate a random number between 1 and 9

        if (board[compChoice] != "X" && board[compChoice] != "O")                                                   //if the computer's move is vaild
        {
            board[compChoice] = "O";                                                                                //store the computer's move in the board                                   
            computerMoves[gamesPlayed] = to_string(compChoice);                                                     //store the computer's move in the computerMoves array
            valid = true;                                                                                           //set valid to true
        }
        else                                                                                                        //if the player's move is not vaild
        {
            cout << "That space is already taken. Please try again." << endl;                                       //display an error message         
            valid = false;                                                                                          //set valid to false
        }
        
        cout << "\nComputer choose number : " << compChoice << "." << endl;
        cout << endl;

        moves.setCompMove(compChoice);                                                                              //call the setComputerInput function in the moves object
        moves.writeToFile();                                                                                        //call the writeToFile function in the moves object
    }
}

void checkWin()                                                                                                     //function to check if the game has been won
{

    cout << endl;                                                                                                   //display a blank line

    if (board[1] == "X" && board[2] == "X" && board[3] == "X")                                                      //if the first row of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                       //display a message saying the player wins                                 
        score += 100;                                                                                               //increase the score by 100
        gamesWon++;                                                                                                 //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Player";                                                                                          //set whoWon to "Player"
        howWon = "This was a First Row Horizontal Win by ";                                                         //set howWon to "This was a First Row Horizontal Win by "
        
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    else if (board[4] == "X" && board[5] == "X" && board[6] == "X")                                                 //if the second row of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                       //display a message saying the player wins
        score += 100;                                                                                               //increase the score by 100
        gamesWon++;                                                                                                 //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Player";                                                                                          //set whoWon to "Player"
        howWon = "This was a Second Row Horizontal Win by ";                                                        //set howWon to "This was a Second Row Horizontal Win"
        
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    else if (board[7] == "X" && board[8] == "X" && board[9] == "X")                                                 //if the third row of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                       //display a message saying the player wins
        score += 100;                                                                                               //increase the score by 100
        gamesWon++;                                                                                                 //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Player";                                                                                          //set whoWon to "Player"
        howWon = "This was a Third Row Horizontal Win by ";                                                         //set howWon to "This was a Third Row Horizontal Win"
         
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    //check for vertical wins
    else if (board[1] == "X" && board[4] == "X" && board[7] == "X")                                                 //if the first column of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                       //display a message saying the player wins
        score += 100;                                                                                               //increase the score by 100
        gamesWon++;                                                                                                 //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Player";                                                                                          //set whoWon to "Player"
        howWon = "This was a First Column Vertical Win by ";                                                        //set howWon to "This was a First Column Vertical Win"

        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    else if (board[2] == "X" && board[5] == "X" && board[8] == "X")                                                 //if the second column of the board is filled with X's
    {
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                       //display a message saying the player wins
        score += 100;                                                                                               //increase the score by 100
        gamesWon++;                                                                                                 //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Player";                                                                                          //set whoWon to "Player"
        howWon = "This was a Second Column Vertical Win by ";                                                       //set howWon to "This was a Second Column Vertical Win"
         
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    else if (board[3] == "X" && board[6] == "X" && board[9] == "X")                                                 //if the third column of the board is filled with X's
    {   
        system("color 2");
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                       //display a message saying the player wins
        score += 100;                                                                                               //increase the score by 100
        gamesWon++;                                                                                                 //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Player";                                                                                          //set whoWon to "Player"
        howWon = "This was a Third column Vertical Win by ";                                                        //set howWon to "This was a Vertical Win"                                                  
         
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    //check for diagonal wins
    else if (board[1] == "X" && board[5] == "X" && board[9] == "X")                                                 //if the top left to bottom right diagonal of the board is filled with X's
    {
        system("color 2");                                                                                          //set the color of the console to red
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                       //display a message saying the player wins
        score += 100;                                                                                               //increase the score by 100
        gamesWon++;                                                                                                 //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                              //increase the number of games played by 1                                                
        whoWon = "Player";                                                                                          //set whoWon to "Player"
        howWon = "This was a Top Left to Bottom Right Diagonal Win by ";                                            //set howWon to "This was a Top Left to Bottom Right Diagonal Win"                                                                                                                            
         
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function     

    }   
    else if (board[3] == "X" && board[5] == "X" && board[7] == "X")                                                 //if the top right to bottom left diagonal of the board is filled wit X's
    {
        system("color 2");                                                                                          //set the color of the console to red
        cout << "\n\t\tPLAYER WINS!" << endl;                                                                       //display a message saying the player wins
        score += 100;                                                                                               //increase the score by 100
        gamesWon++;                                                                                                 //increase the number of games won by the player by 1
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Player";                                                                                          //set whoWon to "Player"
        howWon = "This was a Top Right to Bottom Left Diagonal Win by ";                                            //set howWon to "This was a Top Right to Bottom Left Diagonal Win"
        
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();
        anotherTurn();
        
    }
    //check for horizontal wins
    else if (board[1] == "O" && board[2] == "O" && board[3] == "O")                                                 //if the first row of the board is filled with O's
    {
        system("color 4");                                                                                          //set the console text color to red
        cout << "\n\t\tCOMPUTER WINS!" << endl;                                                                     //display a message saying the computer wins
        score -= 50;                                                                                                //decrease the score by 50
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Computer";                                                                                        //set whoWon to "Computer"                                    
        howWon = "This was a First Row Horizontal Win by ";                                                         //set howWon to "This was a First Row Horizontal Win"

        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();
        anotherTurn();
        
    }
    else if (board[4] == "O" && board[5] == "O" && board[6] == "O")                                                 //if the second row of the board is filled with O's
    {
        system("color 4");                                                                                          //set the console text color to red
        cout << "\n\t\tCOMPUTER WINS!" << endl;                                                                     //display a message saying the computer wins
        score -= 50;                                                                                                //decrease the score by 50
        gamesPlayed++;                                                                                              //increase the number of games played by 1  
        whoWon = "Computer";                                                                                        //set whoWon to "Computer"
        howWon = "This was a Second Row Horizontal Win by ";                                                        //set howWon to "This was a Second Row Horizontal Win"                         
         
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    else if (board[7] == "O" && board[8] == "O" && board[9] == "O")                                                 //if the third row of the board is filled with O's
    {
        system("color 4");                                                                                          //set the console text color to red
        cout << "\n\t\tCOMPUTER WINS!" << endl;                                                                     //display a message saying the computer wins
        score -= 50;                                                                                                //decrease the score by 50                                          
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Computer";                                                                                        //set whoWon to "Computer"
        howWon = "This was a Third Row Horizontal Win by ";                                                         //set howWon to "This was a Third Row Horizontal Win"                               
        
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    //check for vertical wins
    else if (board[1] == "O" && board[4] == "O" && board[7] == "O")                                                 //if the first column of the board is filled with O's
    {
        system("color 4");                                                                                          //set the console text color to red
        cout << "\n\t\tCOMPUTER WINS!" << endl;//display a message saying the computer wins                                 
        score -= 50;                                                                                                //decrease the score by 50
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Computer";                                                                                        //set whoWon to "Computer"
        howWon = "This was a First Column Vertical Win by ";                                                        //set howWon to "This was a First Column Vertical Win"                         
        
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    else if (board[2] == "O" && board[5] == "O" && board[8] == "O")                                                 //if the second column of the board is filled with O's
    {
        system("color 4");                                                                                          //set the console text color to red
        cout << "\n\t\tCOMPUTER WINS!" << endl;                                                                     //display a message saying the computer wins
        score -= 50;                                                                                                //decrease the score by 50
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Computer";                                                                                        //set whoWon to "Computer"
        howWon = "This was a Second Column Vertical Win by ";                                                       //set howWon to "This was a Second Column Vertical Win"                                   
         
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
    else if (board[3] == "O" && board[6] == "O" && board[9] == "O")                                                 //if the third column of the board is filled with O's
    {
        system("color 4");                                                                                          //set the console text color to red
        cout << "\n\t\tCOMPUTER WINS!" << endl;                                                                     //display a message saying the computer wins    
        score -= 50;                                                                                                //decrease the score by 50  
        gamesPlayed++;                                                                                              //increase the number of games played by 1                                    
        whoWon = "Computer";                                                                                        //set whoWon to "Computer"
        howWon = "This was a Third Column Vertical Win by ";                                                        //set howWon to "This was a Third Column Vertical Win" 
         
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();
        anotherTurn();
        
    }
    //check for diagonal wins
    else if (board[1] == "O" && board[5] == "O" && board[9] == "O")                                                 //if the first diagonal of the board is filled with O's
    {
        system("color 4");                                                                                          //set the console text color to red
        cout << "\n\t\tCOMPUTER WINS!" << endl;                                                                     //display a message saying the computer wins
        score -= 50;                                                                                                //decrease the score by 50                                      
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Computer";                                                                                        //set whoWon to "Computer"
        howWon = "This was a Top Left to Bottom Right Diagonal Win";                                                //set howWon to "This was a Top Left to Bottom Right Diagonal Win"
        
        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();
        anotherTurn();
        
    }
    else if (board[3] == "O" && board[5] == "O" && board[7] == "O")                                                 //if the second diagonal of the board is filled with O's                                    
    {
        system("color 4");                                                                                          //set the console text color to red
        cout << "\n\t\tCOMPUTER WINS!" << endl;                                                                     //display a message saying the computer wins
        score -= 50;                                                                                                //decrease the score by 50
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        whoWon = "Computer";                                                                                        //set whoWon to "Computer"
        howWon = "This was a Top Right to Bottom Left Diagonal Win by ";                                            //set howWon to "This was a Top Right to Bottom Left Diagonal Win"

        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGamesWon(gamesWon);                                                                                  //set the number of games won in the TTT class
        ttt.setScore(score);                                                                                        //set the score in the TTT class
        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file

        displayBoard();
        anotherTurn();
        
    }
    else if((board[1] == "X" || board[1] == "O") && (board[2] == "X" || board[2] == "O") && (board[3] == "X" || board[3] == "O") && (board[4] == "X" || board[4] == "O") && (board[5] == "X" || board[5] == "O") && (board[6] == "X" || board[6] == "O") && (board[7] == "X" || board[7] == "O") && (board[8] == "X" || board[8] == "O") && (board[9] == "X" || board[9] == "O"))
    {
        cout << "\n\n\t\tTIE!" << endl;                                                                             //display a message saying the game is a tie
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        gamesTied++;                                                                                                //increase the number of games tied by 1

        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGameTied(gamesTied);                                                                                 //set the number of games tied in the TTT class

        whoWon = "\n\n\t\tTIE!";                                                                                    //set whoWon to "TIE!"
        howWon = "\nThis was a Tie between Player and Computer!!";                                                  //set howWon to "This was a Tie between Player and Computer"";  

        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file                                                    

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
        
    }
}

void checkTie()                                                                                                     //function to check for a tie
{
    
    int tie = 0;

    for (int i = 1; i <= 9; i++)                                                                                    //for loop to check if the board is full
    {
        if (board[i] == "X" || board[i] == "O")                                                                     //if the board is full
        {
            tie++;                                                                                                  //increase the tie by 1
        }
    }

    if (tie == 9)                                                                                                   //if the board is full
    {
        cout << "\n\n\t\tTIE!" << endl;                                                                             //display a message saying the game is a tie
        gamesPlayed++;                                                                                              //increase the number of games played by 1
        gamesTied++;                                                                                                //increase the number of games tied by 1

        ttt.setGamePlayed(gamesPlayed);                                                                             //set the number of games played in the TTT class
        ttt.setGameTied(gamesTied);                                                                                 //set the number of games tied in the TTT class
        ttt.setGamesLost(gamesLost);                                                                                //set the number of games lost in the TTT class

        whoWon = "\n\n\t\tTIE!";                                                                                    //set whoWon to "TIE!"
        howWon = "\nThis was a Tie between Player and Computer!!";                                                  //set howWon to "This was a Tie between Player and Computer"";  

        ttt.setWhoWon(whoWon);                                                                                      //set whoWon in the TTT class
        ttt.setHowWon(howWon);                                                                                      //set howWon in the TTT class

        ttt.writeResults();                                                                                         //write the results to the file                                                    

        displayBoard();                                                                                             //display the board
        anotherTurn();                                                                                              //call anotherTurn function
    }
}                                                                                 


void anotherTurn()                                                                                                  //function to ask the user if they want to play another game
{
    cout << "\n\n\t\tWould you like to play again? (Y/N): ";                                                        //ask the user if they want to play another game
    cin >> playAgain;                                                                                               //get the user's response
    if (playAgain == "Y" || playAgain == "y")                                                                       //if user response is y
    {
        system("color ");                                                                                           //set the console text color to whites
        board[1] = "1";                                                                                             //reset the board
        board[2] = "2";                                  
        board[3] = "3";
        board[4] = "4";
        board[5] = "5";
        board[6] = "6";
        board[7] = "7";
        board[8] = "8";
        board[9] = "9";
        displayBoard();                                                                                             //display the board

        turns = 0;
        dTurn = 9;
    }
    else                                                                                                            //if user response is n
    {
        system("cls");                                                                                              //clear the screen
        system("color 3");                                                                                          //change the text color to green
        
        cout << "\n\n\tYour score is: " << score << endl;                                                           //display the user's score
        cout << "\tGames won: " << gamesWon << endl;                                                                //display the number of games won
        cout << "\tGames played: " << gamesPlayed << endl;                                                          //display the number of games played
        cout << "\tGames tied: " << gamesTied << endl;                                                              //display the number of games tied
        cout << "\tGames lost: " << gamesPlayed - gamesWon << endl;                                                 //display the number of games lost
        cout << "\tPercentage of games won: " << (double)gamesWon / gamesPlayed * 100 << "%" << endl;               //display the percentage of games won

        cout << "\n\n\t\tTHANKS FOR PLAYING!" << endl;                                                              //display a message saying the game is over
        cout << "\n" << endl;

        
        exit(0);                                                                                                    //exit the program
    }
}

int main()                                                                                                          //this is my main function
{
    
    ttt.setTime(currentTime);                                                                                       //sets the time to the current time
    
    srand(time(NULL));                                                                                              //seed the random number generator
    int choice;                                                                                                     //variable to store the user's choice
    bool valid = false;                                                                                             //variable to check if the user's choice is valid
    while (!valid)                                                                                                  //if vaild is not true
    {
        cout << "\n\t\tWelcome to Tic-Tac-Toe!" << endl;                                                            //display a welcome message
        cout << "\n\t1. Play against the computer" << endl;                                                         //display the options
        cout << "\t2. Play against another player" << endl;
        cout << "\t3. Quit" << endl;
        cout << "\n\tEnter your choice: ";                                                                          //ask the user to enter their choice
        cin >> choice;                                                                                              //get the user's choice
        if (choice == 1 || choice == 2 || choice == 3)                                                              //if the user's choice is vaild
        {
            valid = true;                                                                                           //set valid to true
        }   
        else                                                                                                        //if the user's choice is not vaild
        {
            cout << "Invalid choice. Please try again." << endl;                                                    //display an error message
        }
    }

    system("cls");                                                                                                  //clear the screen

    if (choice == 1)                                                                                                //if user choice is 1
    {
        while (turns < 9)                                                                                           //while the number of games played is less than 9
        {
            
            cout << "\tCurrent Time: " << currentTime << endl;                                                      //display the current time

            cout << "\n\tGames played: " << gamesPlayed << "\t\tTurns left: " << dTurn << endl;                     //display the number of games played
            
            cout << "\n\t\tPlayer's turn" << "\t\tCurrent Score: " << score << endl;                                //display the current score
            
            displayBoard();                                                                                         //display the board
            system("color 2");
            player();                                                                                               //call player function
            displayBoard();                                                                                         //display the board
            cout << "\nLet's see if the computer can win";                                                          //display a message saying the program is checking for a win
            for(int i = 0; i < 3; i++)                                                                              //for loop to display ... so the user knows the program is working
            {
                Sleep(1000);                                                                                        //sleep for 1 second                                    
                cout << ".";                                                                                        //display a dot
            }
            checkTie();                                                                                             //call checkTie function
            checkWin();                                                                                             //call checkWin function
            dTurn--;

            system("color 4");

            cout << "\n\t\tComputer's turn" << endl;                                                                //display a message saying the computer's turn
            computer();                                                                                             //call computer function
            displayBoard();                                                                                         //display the board

            Sleep(5000);                                                                                            //sleep for 5 seconds

            cout << "\nLet's see if player can beat this move";                                                     //display a message saying the program is checking for a win

            
            for(int i = 0; i < 3; i++)                                                                              //for loop to display ... so the user knows the program is working
            {
                Sleep(1000);                                                                                        //sleep for 5 second                                            
                cout << ".";                                                                                        //display a dot
            }
            checkTie();                                                                                             //call checkTie function
            checkWin();                                                                                             //call checkWin function
            dTurn--;

            system("cls");                                                                                          //clear the screen

            turns++;
        }
    }
    else if (choice == 2)                                                                                           //if user choice is 2
    {
        
        bool mComp = false;                                                                                         //variable to check if the computer is playing

        moves.setComp(mComp);                                                                                       //set the computer's move to false
        
        while (turns < 9)                                                                                           //while the number of games played is less than 9
        {
            
            cout << "\tCurrent Time: " << currentTime << endl;                                                      //display the current time
            
            cout << "\n\tGames played: " << gamesPlayed << "\t\tTurns left: " << dTurn << endl;                     //display the number of games played
            
            cout << "\n\tPlayer's 1 turn " << "\tCurrent Score: " << score << endl;                                 //display the current score
            
            displayBoard();                                                                                         //display the board
            system("color 2");
            player();                                                                                               //call player function
            displayBoard();                                                                                         //display the board
            cout << "\nLet's see if player 2 can win";                                                              //display a message saying the program is checking for a win
            for(int i = 0; i < 3; i++)                                                                              //for loop to display ... so the user knows the program is working
            {
                Sleep(1000);                                                                                        //sleep for 1 second                                    
                cout << ".";                                                                                        //display a dot
            }
            checkTie();                                                                                             //call checkTie function
            checkWin();                                                                                             //call checkWin function
            dTurn--;

            system("color 4");

            cout << "\n\t\tPlayer's 2 turn " << endl;                                                               //display a message saying the computer's turn
            displayBoard();
            player2();                                                                                              //call computer function
            displayBoard();                                                                                         //display the board

            Sleep(2000);                                                                                            //sleep for 2 seconds
            cout << "\nLet's see if player 1 can beat this move";                                                   //display a message saying the program is checking for a win

            
            for(int i = 0; i < 3; i++)                                                                              //for loop to display ... so the user knows the program is working
            {
                Sleep(1000);                                                                                        //sleep for 1 second                                            
                cout << ".";                                                                                        //display a dot
            }
            checkTie();                                                                                             //call checkTie function
            checkWin();                                                                                             //call checkWin function
            dTurn--;

            system("cls");                                                                                          //clear the screen
            turns++;
        }
    }
    else if (choice == 3)                                                                                           //if user choice is 3
    {
        system("color 09");                                                                                         //change the text color to green
        cout << "\n\n\t\tTHANKS FOR PLAYING!" << endl;                                                              //display a message saying the game is over
        cout << endl;
        exit(0);                                                                                                    //exit the program
    }
    
    return 0;
}
