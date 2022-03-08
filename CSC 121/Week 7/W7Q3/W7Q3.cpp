/*

    Week 7      Dicussion Question 3
    Moksh Shah  03/04/2021
    Ranged Loops
    CSC 121

*/

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> x{4, 2, 6, 8, 5, 9};
    int sum = 0;
    
    for(int total : x)
    {
        sum += total;
    }
    
    cout << "\n" << sum;
    
    return 0;
}
