/*

    Week 9      Dicussion Question 1
    Moksh Shah  03/14/2021
    Pre-Built Functions 
    CSC 121

*/

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <windows.h>
using namespace std;

vector<string> names = {"Lake", "Nisha", "Matthew", "Oscar"};                                                       // vector string for names
vector<char> chars = {'l', 'n', 'm', 'o'};                                                                          // vector char for characters
vector<int> num = {6, 7, 3, 4,};                                                                                    // vector int for numbers

void stringVec(void);
void charVec(void);
void intVec(void);

int main()                                                                                                          // main function
{
    cout << endl;

    stringVec();                                                                                                    // calling the function stringVec()

    cout << endl;

    charVec();                                                                                                      // calling the function charVec()

    cout << endl;

    intVec();                                                                                                       // calling the function intVec()

    cout << endl;

    cout << "Thanks for using our program to sort you names, characters, and numbers!\n" << endl;

    return 0;
}

void stringVec()                                                                                                    // function for string vector
{
    cout << "Printing String Vectors";                                                                              
    for(int i = 0; i < 3; i++)                                                                                      // for loop presentation
    {
        cout << ".";
        Sleep(1000);
    }
    cout << endl;

    cout << "\n\tSize of the vector string is ";                                                                    // printing the size of vector string
    Sleep(500);

    cout << names.size() << endl;                                                                                   // using .size()
    Sleep(500);

    cout << "\tString names before using sort(): ";
    for(string x : names)                                                                                           // for loop to print the names before sorting
    {
        cout << x << " ";
        Sleep(1000);
    }

    sort(names.begin(), names.end());                                                                               // calling sort function using .begin(), .end()
    Sleep(500);

    cout << "\n\tString names after using sort(): ";
    for(string x : names)                                                                                           // for loop to print the names after sorting
    {
        cout << x << " ";
        Sleep(1000);
    }

    cout << endl;

}

void charVec()                                                                                                      // function for characters vector
{
    cout << "Printing Characters Vectors";
    for(int i = 0; i < 3; i++)                                                                                      // for loop presentation
    {
        cout << ".";
        Sleep(1000);
    }
    cout << endl;

    cout << "\n\tSize of the vector char is ";                                                                      // printing the size of vector characters
    Sleep(500);

    cout << chars.size() << endl;                                                                                   // using .size()
    Sleep(500);

    cout << "\tCharacters before using sort(): ";
    for(char x : chars)                                                                                             // for loop to print the characters before sorting
    {
        cout << x << " ";
        Sleep(1000);
    }

    sort(chars.begin(), chars.end());                                                                               // calling sort function using .begin(), .end()
    Sleep(500);

    cout << "\n\tCharacters after using sort(): ";
    for(char x : chars)                                                                                             // for loop to print the characters after sorting
    {
        cout << x << " ";
        Sleep(1000);
    }

    cout << endl;
}

void intVec()                                                                                                       // function for integer vector
{
    cout << "Printing Integer Vectors";
    for(int i = 0; i < 3; i++)                                                                                      // for loop presentation
    {
        cout << ".";
        Sleep(1000);
    }
    cout << endl;

    cout << "\n\tSize of the vector int is ";                                                                       // printing the size of vector integers
    Sleep(500);

    cout << num.size() << endl;                                                                                     // using .size()
    Sleep(500);

    cout << "\tIntegers before using sort(): ";
    for(int x : num)                                                                                                // for loop to print the integer before sorting
    {
        cout << x << " ";
        Sleep(1000);
    }

    sort(num.begin(), num.end());                                                                                   // calling sort function using .begin(), .end()
    Sleep(500);

    cout << "\n\tIntegers after using sort(): ";
    for(int x : num)                                                                                                // for loop to print the integer after sorting
    {
        cout << x << " ";
        Sleep(1000);
    }

    cout << endl;
}