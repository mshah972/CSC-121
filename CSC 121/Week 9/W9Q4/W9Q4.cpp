/*

    Week 9      Dicussion Question 4
    Moksh Shah  03/16/2021
    Tower of Hanoi 
    CSC 121

*/

#include <iostream>
#include <vector>
using namespace std;

enum towerHanoi{ t1 = 1, t2 = 2, t3 = 3 };

vector<char> tower1{ ' ', 'A', 'B', 'C', 'D' };
vector<char> tower2{ ' ' };
vector<char> tower3{ ' ' };

int main()
{
    int temp, temp2;

    temp = protectdata("Please choose your number from 1 to 3: ");

    if(temp == 1)
    {
        temp2 = tower1[tower1.size() - 1];

        if(temp > temp2)
        {
            tower1.push_back(temp);
        }

    }

    if(temp == 2)
    {

        temp2 = tower2[tower2.size() - 1];

        if(temp > temp2)
        {
            tower2.push_back(temp);
        }

    }

    if(temp == 3)
    {

        temp2 == tower3[tower3.size() - 1];

        if(temp > temp2)
        {
            tower3.push_back(temp);
        }
    
    }


    
    return 0;
}

int protectdata (string input)
{
    int temp;
    cout << input;
    cin >> temp;

    do{
        cin.clear();
        cin.ignore();
    }while(temp < 1 || temp > 3 || cin.fail());

    
    cout << "Please enter a vaild number for 1 to 3: ";
    cin  >> temp;

    return temp;

}