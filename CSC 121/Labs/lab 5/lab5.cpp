/*

    Moksh Shah      CSC 121
    Lab 5 Project   Letter Match

*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string keyword = "Keyword";
string userGuess;
char letter;
int score = 0;

void displayKeyword()
{
    //display the keyword in X's

    cout << "\nThe word to guess is: ";

    for (int i = 0; i < keyword.length(); i++)
    {
        if (keyword[i] == ' ')
        {
            cout << " ";
        }
        else
        {
            cout << "X";
        }
    }
    cout << endl;
}

void displayUserGuess()
{
    //display the user's guesses 

    cout << "\nYour guesses so far: ";

    for (int i = 0; i < userGuess.length(); i++)
    {
        if (userGuess[i] == ' ')
        {
            cout << " ";
        }
        else
        {
            cout << userGuess[i];
        }
    }
    cout << endl;
}

void displayLettersLeft()
{
    //display the number of letters left to guess

    cout << "\nLetters left to guess: ";

    //count the number of letters left to guess
    int lettersLeft = 0;

    for (int i = 0; i < keyword.length(); i++)
    {
        if (keyword[i] == ' ')
        {
            lettersLeft--;
        }
        {
            lettersLeft++;
        }
    }

    //display the number of letters left to guess
    cout << lettersLeft << endl;
}

void userCompare()
{
    //compare the user's guess to the keyword
    //if the user's guess is correct, replace the X's with the letter in the keyword, add score to 100 points for each letter guessed correctly

    for (int i = 0; i < keyword.length(); i++)
    {
        if (keyword[i] == userGuess[i])
        {
            cout << "Correct!" << endl;
            score += 100;
        }
        else
        {
            cout << "Incorrect!" << endl;
        }
    }

}

void userGuessLetter()
{
    //ask the user to guess a letter
    cout << "Guess a letter: ";
    cin >> letter;

    //add the letter to the user's guess
    userGuess += letter;

}


int main()
{
    //greet the user
    cout << "Welcome to the Letter Match game!" << endl;

    //rules of the game
    cout << "The rules are simple:" << endl;
    cout << "You will be given a word to guess." << endl;
    cout << "You will guess a letter at a time." << endl;
    cout << "If you guess a letter correctly, you will get 100 points." << endl;
    cout << "If you guess a letter incorrectly, you will lose a life." << endl;

    //start the game
    cout << "Let's start the game!" << endl;

   //run the game 9 times
    for (int i = 0; i < 9; i++)
    {
        displayKeyword();
        
        //until the user guesses the word correctly, or loses all their tries
         

        
        cout << "You won!" << endl;
    }

    //display the user's score
    cout << "Your score is: " << score << endl;

    return 0;

}