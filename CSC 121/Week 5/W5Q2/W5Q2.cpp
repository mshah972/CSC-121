/*

    Week 5      Discussion Question 2
    Moksh Shah  02-16-2022
    Accumulator
    CSC 121

*/
#include <bits/stdc++.h>                                                                                                // header file for c++ 
#include <iostream>                                                                                                     // iostream library 
#include <math.h>                                                                                                       // math library
#include <windows.h>                                                                                                    // windows library
using namespace std;                                                                                                    // namespace


int scores[5];                                                                                                          // global scores array
int arrSize = sizeof(scores) / sizeof(scores[0]);                                                                       // variable for size of the array
void Sort(int);                                                                                                         // global Sort Function

int main()
{
    int avg;                                                                                                            // variable for avg
    int total;                                                                                                          // variable for total
    cout << endl;                                                                                                       // newline

    for (int i = 0; i < 5; i++)                                                                                         // for loop to prompt user to enter their 5 scores
    {
        cout << "Please enter scores: ";                                                                                // prompt
        cin >> scores[i];                                                                                               // input
        cout << endl;                                                                                                   // newline
        total += scores[i];                                                                                             // calculates the total
    }

    cout << "\nLet's sort your scores for High to low: ";                                                               // prints out sorted array
    Sort(arrSize);                                                                                                      // calls sort function

    cout << "\nLet's calculate your total: ";                                                                           // prints out the total
    Sleep(5000);
    cout << total;

    avg = total / arrSize;                                                                                              // calculate the average

    cout << "\nLet's find the average: ";                                                                               // prints out the average
    Sleep(5000);
    cout << avg;

    cout << endl;
    cout << endl;

    return 0;
}


void Sort(int n)                                                                                                        // sort function
{

    sort(scores, scores + arrSize, greater<int>());                                                                     // sort the array descending order
    
    for(int i = 0; i < n; i++)                                                                                          // for loop to print sorted numbers
    {
        Sleep(1000);
        cout << scores[i] << " ";   
    }

} 
