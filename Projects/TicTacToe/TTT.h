/*

    Moksh Shah      CSC 121
    TicTacToe Project

*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class TTT {                                                                                     // Class TTT

    public:                                                                                     // Public Functions                                          
        vector<int> totalWins = {};                                                             // Vector to store the total wins
        vector<int> totalLosses = {};                                                           // Vector to store the total losses                                    
        string player;                                                                          // String to store the player
        string time;                                                                            // String to store the time                                 
        string whoWon;                                                                          // String to store the winner
        string howWon;                                                                          // String to store the winning method                                 
        int score;                                                                              // Integer to store the score                                 
        int gamePlayed;                                                                         // Integer to store the number of games played
        int gameTied;                                                                           // Integer to store the number of games tied                                   



        TTT()                                                                                   // Constructor                             
        {
            player = "";                                                                        // Initialize player to empty string                                                   
        }

    int getTotalWins()                                                                          // Function to get the total wins                                 
    {
        return totalWins.size();                                                                // Return the total wins                       
    }

    int getTotalLosses()                                                                        // Function to get the total losses
    {
        return totalLosses.size();                                                              // Return the total losses                        
    }

    void setGamesWon(int wins)                                                                  // Function to set the games won                                  
    {
        totalWins.push_back(wins);                                                              // Push the wins to the vector                             
    }

    void setGamesLost(int losses)                                                               // Function to set the games lost                              
    {
        totalLosses.push_back(losses);                                                          // Push the losses to the vector                              
    }

    void setGamePlayed(int games)                                                               // Function to set the games played                                
    {
        gamePlayed = games;                                                                     // Set the games played to the games
    }

    void setGameTied(int tied)                                                                  // Function to set the games tied                                    
    {
        gameTied = tied;                                                                        // Set the games tied to the tied
    }   

    void setWhoWon(string winner)                                                               // Function to set the winner                          
    {
        whoWon = winner;                                                                        // Set the winner to the winner                             
    }

    void setHowWon(string winType)                                                              // Function to set the winning method
    {
        howWon = winType;                                                                       // Set the winning method to the winType                                       
    }

    void setScore(int pScore)                                                                   // Function to set the score                                      
    {
        score = pScore;                                                                         // Set the score to the pScore
    }

    void setTime(string cTime)                                                                  // Function to set the time                                   
    {
        time = cTime;                                                                           // Set the time to the cTime                                   
    }   

    void writeResults()                                                                         // Function to write the results to a file
    {
        ofstream outFile;                                                                       // Output file stream                      
        outFile.open("TTTwins.txt", ios::app);                                                  // Open the file to append
        outFile << "Game Played on " << time << endl;                                           // Write the time to the file                          
        outFile << "Game Number: " << gamePlayed << endl;                                       // Write the game number to the file                           
        outFile << whoWon << " has won this game!" << endl;                                     // Write who won that game to the file
        outFile << "The Score is: " << score << endl;                                           // Write the score to the file                         
        outFile << "The number of games won is: " << totalWins.size() << endl;                  // Write the number of games won to the file          
        outFile << "The number of games lost is: " << totalWins.size() - gamePlayed << endl;    // Write the number of games lost to the file
        outFile << "The number of games played is: " << gamePlayed << endl;                     // Write the number of games played to the file
        outFile << "The number of games tied is: " << gameTied << endl;                         // Write the number of games tied to the file
        outFile << howWon << whoWon << "!\n" << endl;                                           // Write the winning method to the file                 
        outFile.close();                                                                        // Close the file                           
    }

};