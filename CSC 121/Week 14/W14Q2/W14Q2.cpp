/*

    Moksh Shah            Discussion Question 1
    Week 14               04/25/2021
    CSC 121
    Simple Wheel of Fortune Game

*/

#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

vector<char> phrase = {'W', 'H', 'A', 'T', ' ', 'Y', 'O', 'U', ' ', 'S', 'E', 'E', ' ', 'I', 'S', ' ', 'W', 'H', 'A', 'T', ' ', 'Y', 'O', 'U', ' ', 'G', 'E', 'T'};
vector<char> disPharse = {'_', '_', '_', '_', ' ', '_', '_', '_', ' ', '_', '_', '_', ' ', '_', '_', ' ', '_', '_', '_', '_', ' ', '_', '_', '_', ' ', '_', '_', '_'};
vector<char> compChoice = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
vector<char> guessed = {};

char guess(string);
bool match(char);
void display(vector<char>);

int score = 0;
int score2 = 0;
int compScore = 0;

void player(void);
void player2(void);
void computer(void);
bool match(char);
void display(char);
char guess(string);

int main()
{

    system("cls");
    
    cout << "\n\n\t\tWelcome to the Wheel of Fortune Game!" << endl;

    while(disPharse != phrase)
    {
        player();
        player2();
        computer();
    }

    cout << "\n\n\tPlayer 1 Score: " << score << endl;
    cout << "\tPlayer 2 Score: " << score2 << endl;
    cout << "\tComputer Score: " << compScore << endl;

    if(score > score2 || score > compScore)
    {
        cout << "\n\n\tPlayer 1 Wins!" << endl;
    }
    else if(score2 > score || score2 > compScore)
    {
        cout << "\n\n\tPlayer 2 Wins!" << endl;
    }
    else if(compScore > score || compScore > score2)
    {
        cout << "\n\n\tComputer Wins!" << endl;
    }
    else
    {
        cout << "\n\n\tIt's a Tie!" << endl;
    }


    return 0;

}

void display(vector<char> phr)
{
    
    cout << "\nYour Phrase to guess today is: ";
    
    for (int i = 0; i < phrase.size(); i++)
    {
        cout << disPharse[i] << " ";
    }
    cout << endl;

    cout << "\nYour guessed letters so far are: ";
    for (int i = 0; i < guessed.size(); i++)
    {
        cout << guessed[i] << " ";
    }
    cout << endl;

    cout << "\n\tPlayer 1 Score: " << score << endl;
    cout << "\tPlayer 2 Score: " << score2 << endl;
    cout << "\tComputer Score: " << compScore << endl;

    cout << endl;
}


bool match(char m)
{
    int temp = 0;
    bool match = false;

    for(char e : phrase)
    {
        if(m == e)
        {
            match = true;
            disPharse[temp] = m;
            guessed.push_back(m);

        }
        temp++;
    }
    return match;
}

void player()
{
    char p1;
    bool valid = false;

    display(disPharse);

    cout << "\n\n\tPlayer 1, please enter a letter to guess: ";
    cin >> p1;

    for(char e : guessed)
    {
        if(p1 == e)
        {
            cout << "\n\t\tMatch Found!!" << endl;
            valid = true;
            score++;
        }
        else
        {
            valid = false;
            cout << "\n\t\tNo match found!" << endl;
        }
    }


    if(p1 == 'W')
    {
        score2 = score2 + 10;
        cout << "\n\t\tYou got a bonus point!" << endl;
    }
    else if(p1 == 'T')
    {
        score2 = score2 + 20;
        cout << "\n\t\tYou got a jackpot!" << endl;
    }

    match(p1);
}

void player2()
{
    char p2;
    bool valid = false;

    display(disPharse);

    cout << "\n\n\tPlayer 2, please enter a letter to guess: ";
    cin >> p2;


    for(char e : guessed)
    {
        if(p2 == e)
        {
            cout << "\n\t\tMatch Found!!" << endl;
            valid = true;
            score2++;
        }
        else
        {
            valid = false;
            cout << "\n\t\tNo match found!" << endl;
        }
    }


    if(p2 == 'W')
    {
        score2 = score2 + 10;
        cout << "\n\t\tYou got a bonus point!" << endl;
    }
    else if(p2 == 'T')
    {
        score2 = score2 + 20;
        cout << "\n\t\tYou got a jackpot!" << endl;
    }

    match(p2);
}

void computer()
{
    char cg;
    bool valid = false;

    display(disPharse);

    cout << "\n\n\tComputer, please enter a letter to guess: ";
    cg = compChoice[rand() % compChoice.size()];
    Sleep(1000);
    cout << cg << endl;

    for(char e : guessed)
    {
        if(cg == e)
        {
            cout << "\n\t\tComputer Match Found!!" << endl;
            valid = true;
            compScore++;
        }
        else
        {
            valid = false;
            cout << "\n\t\tComputer No match found!" << endl;
        }
    }


    if(cg == 'W')
    {
        compScore = compScore + 10;
        cout << "\n\t\tComputer got a bonus point!" << endl;
    }
    else if(cg == 'T')
    {
        compScore = compScore + 20;
        cout << "\n\t\tComputer got a jackpot!" << endl;
    }

    match(cg);
}

void checkwin()
{
    if(disPharse == phrase)
    {
        cout << "\n\n\t\tYou Win!" << endl;
    }
}