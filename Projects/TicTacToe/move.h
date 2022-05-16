/*

    Moksh Shah      CSC 121
    TicTacToe Project

*/

#include <iostream> 
#include <string>
#include <fstream>
using namespace std;

class Move {                                                                                            // class for the move

    public:                                                                                             // public functions
        int userChoice;                                                                                 // user choice
        int computerChoice;                                                                             // computer choice                         
        int user2Choice;                                                                                // user2 choice
        bool comp = true;                       

        Move()                                                                                          // default constructor                        
        {
            userChoice = 0;
            computerChoice = 0;
            user2Choice = 0;                  
        }
    
    void setUserMove(int uChoice)                                                                       // set user move                 
    {
        userChoice = uChoice;                   
    }

    void setUser2Move(int u2Choice)
    {
        user2Choice = u2Choice;
    }

    void setCompMove(int compChoice)                                                                    // set computer move                      
    {
        computerChoice = compChoice;                         
    }

    bool setComp(bool mComp)
    {
        comp = mComp;

        return comp;
    }

    void writeToFile()                                                                                  // write to file                      
    {
        
        if(!comp)                                                                                       // if Player 2 is playing
        {
            ofstream outFile;                                                                           // outFile
            outFile.open("moves.txt", ios::app);                                                        // open file
            outFile << endl;
            outFile << "**************NEXT MOVE*****************" << endl;
            outFile << "Player 1 has chosen number: " << userChoice << endl;                            // user choice
            outFile << "Player 2 has chosen number: " << user2Choice << endl;                           // user 2 choice
            outFile << "****************************************" << endl;
            outFile << endl;
            outFile.close();
        }
        else                                                                                            // if computer is playing
        {
            ofstream outFile;                                                                           // outFile
            outFile.open("moves.txt", ios::app);                                                        // open file
            outFile << endl;
            outFile << "**************NEXT MOVE*****************" << endl;
            outFile << "Player has chosen number: " << userChoice << endl;                              // user choice
            outFile << "Computer has chosen number: " << computerChoice << endl;                        // computer choice
            outFile << "****************************************" << endl;
            outFile << endl;
            outFile.close();
        }
         
    }

};
