/*

    Week 7      Dicussion Question 1
    Moksh Shah  03/04/2021
    Random #'s
    CSC 121

*/

#include <iostream>
#include <random>
#include <ctime>
#include <string.h>
using namespace std;


int main()
{
   
    default_random_engine engine{ static_cast<unsigned int>(time(0)) }; 

    uniform_int_distribution<unsigned int> randNum{ 1, 100 };
    
    cout << "\nLets Start with Loop 1.\n" << endl;
    
    for(int i = 1; i <= 20; i++)                                                        // for loop for loop 1
    {
        cout << "Loop 1: " << randNum(engine) << endl;                                  // generates 20 random numbers from 1 - 100
    }
    
    cout << "\nLets Start Loop 2 now.\n" << endl;
    
    for(int j = 1; j <= 12; j++)                                                        // for loop for loop 2
    {
        cout << "Loop 2: " << randNum(engine) << endl;                                  // generates 12 random numbers from 1 - 100
    }
    
    cout << "\nLets move on to Loop 3.\n" << endl; 
    
    for(int k = 1; k <= 6; k++)                                                         // for loop for loop 3
    {
        cout << "Loop 3: " << randNum(engine) << endl;                                  // generates 6 random numbers from 1 - 100
    }
    
    cout << "\nNow lets do the last Loop 4.\n" << endl;
    
    for(int m = 1; m <= 3; m++)                                                         // for loop for loop 4
    {
        cout << "Loop 4: " << randNum(engine) << endl;                                  // generates 3 random numbers from 1 - 100
    }
    
    return 0;
}