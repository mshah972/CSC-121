/*

    Week 9      Dicussion Question 4
    Moksh Shah  03/16/2021
    Tower of Hanoi
    CSC 121

*/

#include <iostream>                                                                                         // for cin and cout         
#include <vector>                                                                                           // for vector
using namespace std;    

enum towerHanoi                                                                                             // enum for towerHanoi
{
    t1 = 1,
    t2 = 2,
    t3 = 3
};

vector<char> tower1{' ', 'A', 'B', 'C', 'D'};                                                               // vector for tower1                                    
vector<char> tower2{' '};                                                                                   // vector for tower2                                    
vector<char> tower3{' '};                                                                                   // vector for tower3      

int protectdata(string);                                                                                    // function to protect data                    
void move();                                                                                                // function to move
void tower();                                                                                               // function to display towers

char temp1, temp2;                                                                                          // temp variables 

int main()                                                                                                  // main function
{

    for (int i = 0; i < 10; i++)                                                                            // loop for 10 times to play game
    {
        cout << "\n\t\tTower of Hanoi" << endl;                                                             // display game name

        cout << "\n\n T1: ";                                                                                // display tower1
        for (int i = 0; i < tower1.size(); i++)                                                             // loop for tower1
        {
            cout << tower1[i] << " ";                                                                       // display tower1
        }

        cout << "\n\n T2: ";                                                                                // display tower2
        for (int i = 0; i < tower2.size(); i++)                                                             // loop for tower2
        {
            cout << tower2[i] << " ";                                                                       // display tower2
        }

        cout << "\n\n T3: ";                                                                                // display tower3
        for (int i = 0; i < tower3.size(); i++)                                                             // loop for tower3
        {
            cout << tower3[i] << " ";                                                                       // display tower3
        }

        cout << endl;                                                                                       // new line

        tower();                                                                                            // call function to choose a tower

        move();                                                                                             // call function to move

        if(tower3.size() > 5)                                                                               // if statement to check if the player won
        {
            cout << "\n\n\tYou Win!" << endl;                                                               // display win message
            exit(0);                                                                                        // exit program
        }

        system("cls");                                                                                      // clear screen
    }

    return 0;
}

int protectdata(string input)                                                                               // function to protect data
{
    int temp;                                                                                               // temp variable
    cout << input;                                                                                          // display input
    cin >> temp;                                                                                            // get input

    while (temp < 1 || temp > 3 || cin.fail())                                                              // while loop to check if input is valid
    {
        while(cin.fail()) 
        {
            cin.clear();                                                                                    // clear cin
            cin.ignore();                                                                                   // ignore cin
        }
        cout << "Invalid Input. Please enter a number: ";                                                   // display error message
        cin >> temp;                                                                                        // get input
    }

    return temp;                                                                                            // return temp
}

void tower()                                                                                                // function to choose a tower
{
    int temp = protectdata("\nPlease choose your number for tower from 1 to 3: ");                          // get input

    if (temp == towerHanoi::t1)                                                                             // if statement to check if input is tower1
    {
        temp1 = tower1[tower1.size() - 1];                                                                  // get last element of tower1
        tower1.pop_back();                                                                                  // pop last element of tower1
    }

    if (temp == towerHanoi::t2)                                                                             // if statement to check if input is tower2
    {
        temp2 = tower2[tower2.size() - 1];                                                                  // get last element of tower2
        tower2.pop_back();                                                                                  // pop last element of tower2
    }

    if (temp == towerHanoi::t3)                                                                             // if statement to check if input is tower3
    {
        temp2 = tower3[tower3.size() - 1];                                                                  // get last element of tower3
        tower3.pop_back();                                                                                  // pop last element of tower3
    }
}

void move()                                                                                                 // function to move
{
    int temp = protectdata("\nPlease choose your number for your move from 1 to 3: ");                      // get input

    if (temp == 1)                                                                                          // if statement to check if input is 1
    {
        temp2 = tower1[tower1.size() - 1];                                                                  // get last element of tower1

        if (temp1 > temp2)                                                                                  // if statement to check if temp1 is greater than temp2
        {
            tower1.push_back(temp1);                                                                        // push temp1 to tower1
        }
    }

    if (temp == 2)                                                                                          // if statement to check if input is 2
    {
        temp2 = tower2[tower2.size() - 1];                                                                  // get last element of tower2

        if (temp1 > temp2)                                                                                  // if statement to check if temp1 is greater than temp2
        {
            tower2.push_back(temp1);                                                                        // push temp1 to tower2
        }
    }

    if (temp == 3)                                                                                          // if statement to check if input is 3
    {
        temp2 = tower3[tower3.size() - 1];                                                                  // get last element of tower3

        if (temp1 > temp2)                                                                                  // if statement to check if temp1 is greater than temp2
        {
            tower3.push_back(temp1);                                                                        // push temp1 to tower3
        }
    }
}