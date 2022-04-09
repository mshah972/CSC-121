/*

    Moksh Shah          Lab 9
    CSC 121             04/04/2022
    Tower of Hanoi

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum Htowers {T1 = 1, T2 = 2, T3 = 3};

vector<char> tower1 = {'A', 'B', 'C', 'D'};
vector<char> tower2 = {};
vector<char> tower3 = {};

char userInput;

int protectData(string prompt)
{
    int input;
    cout << prompt;
    cin >> input;

    while(input < 1 || input > 3 || cin.fail())
    {
        cout << "Invalid input. Please enter a number between 1 and 3." << endl;
        cin.clear();
        cin.ignore();
        cout << prompt;
        cin >> input;
    }

    return input;
}

int main()
{
    
    cout << "\n\n\t\tWelcome to Tower of Hanoi!" << endl;
    cout << "\n\tYou have 10 moves to solve the puzzle." << endl;


    for(int i = 0; i < 10; i++)
    {
          
        
        cout << "\n\n\nT1: ";
        for(int i = 0; i < tower1.size(); i++)
        {
            cout << tower1[i] << " ";
        }
        cout << endl;

        cout << "T2: ";
        for(int i = 0; i < tower2.size(); i++)
        {
            cout << tower2[i] << " ";
        }
        cout << endl;

        cout << "T3: ";
        for(int i = 0; i < tower3.size(); i++)
        {
            cout << tower3[i] << " ";
        }
        cout << endl;

        cout << "\nPlease enter the number of the tower you would like to move from: ";
        int from = protectData("");
        cout << "\nPlease enter the number of the tower you would like to move to: ";
        int to = protectData("");

        //move the letter from the from tower to the to tower
        if(from == 1)
        {
            if(tower1.size() > 0)
            {
                if(to == 2)
                {
                    if(tower2.size() > 0)
                    {
                        if(tower1[tower1.size() - 1] < tower2[tower2.size() - 1])
                        {
                            cout << "\n\n\tYou have lost this puzzle." << endl;
                            exit(0);
                        }
                    }
                    tower2.push_back(tower1[tower1.size() - 1]);
                    tower1.pop_back();
                }
                else if(to == 3)
                {
                    if(tower3.size() > 0)
                    {
                        if(tower1[tower1.size() - 1] < tower3[tower3.size() - 1])
                        {
                            cout << "\n\n\tYou have lost this puzzle." << endl;
                            exit(0);
                        }
                    }
                    tower3.push_back(tower1[tower1.size() - 1]);
                    tower1.pop_back();
                }
            }
        }
    }

    cout << "\n\n\t\tCongratulations! You have solved the puzzle." << endl;
    cout << "T1: ";
    for(int i = 0; i < tower1.size(); i++)
    {
        cout << tower1[i] << " ";
    }
    cout << endl;

    cout << "T2: ";
    for(int i = 0; i < tower2.size(); i++)
    {
        cout << tower2[i] << " ";
    }
    cout << endl;

    cout << "T3: ";
    for(int i = 0; i < tower3.size(); i++)
    {
        cout << tower3[i] << " ";
    }
    cout << endl;

    return 0;
}