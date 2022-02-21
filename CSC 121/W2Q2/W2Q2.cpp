/*
 
    Week 2      Disscusion Question 2
    String Manipulation
    Moksh Shah      01-27-2022
 
 */

#include <iostream>
using namespace std;

int main()
{
    string name[0];
    int length;
    char first;
    char last;
    
    cout << "Please enter your name: \n";
    cin >> str(name);
    
    length = name.length() - 1;
    first = name[0];
    last = name[length];
    
    cout << "\nFirst initial: " << first;
    cout << "\nLast initial: " << last;
    
}
