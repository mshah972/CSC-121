/*

    Week 8      Dicussion Question 3
    Moksh Shah  03/09/2021
    Global Variables
    CSC 121

*/

#include <iostream>
using namespace std;

int aCounter = 1;                                                                                                       // global counter for function A

void A(void);                                                                                                           // global intializers
void B(void);
void C(int);

int main()                                                                                                              // main function
{
    string input = "";                                                                                                  // string for user input

    int cCounter = 1;                                                                                                   // int counter for function C

    while(input != "Q")                                                                                                 // while loop with a condition 
    {
        cout << endl;                                                                                                   // new line
        cout << "Please choose A, B, C or Q to quit: ";                                                                 // prompt to enter a choice
        cin >> input;                                                                                                   // store choice

        if(input == "A" || input == "a")                                                                                // if statement to check if the input is A 
        {
            A();                                                                                                        // input A call function A()
        }

        else if(input == "B" || input == "b")                                                                           // if statement to check if the input is B
        {
            B();                                                                                                        // input B call function B()
        }

        else if(input == "C" || input == "c")                                                                           // if statement to check if the input is C
        {
            cCounter++;                                                                                                 // increment the counter for c function 
            C(cCounter);                                                                                                // calling C() function with giving a int counter
        }

        else if(input == "Q" || input == "q")                                                                           // if statement to check if the input is Q
        {
            cout << endl;

            cout << "Thanks for giving your time!";                                                                     // input Q then quit the program 

            cout << endl;

            break;
        }
        else                                                                                                            // if input is any other than this ask again
        {
            cout << endl;

            cout << "Please choose a valid Letter from A, B, C or Q to quit: ";
            cin >> input;
        }
    }

    return 0;
}

void A()                                                                                                                // function A()
{
    string output = "A";                                                                                                // string output that print A

    cout << endl;

    for(int i = 1; i <= aCounter; i++)                                                                                  // for loop to add A to the output when user type's A
    {
        output += output[i];                                                                                            // add output A one by one (A then AA then AAA so on)
        cout << output;                                                                                                 // print output
    }
    aCounter++;                                                                                                         // increment global a counter

    cout << endl;
}

void B()                                                                                                                // function C()
{
    static int bCounter = 1;                                                                                            // static local int counter
    string output = "B";                                                                                                // string output that print B

    cout << endl;

    for(int i = 1; i <= bCounter; i++)                                                                                  // for loop to add B to the output when user type's B
    {
        output += output[i];                                                                                            // add output B one by one (B then BB then BBB so on)
        cout << output;
    }
    bCounter++;                                                                                                         // increment local b counter

    cout << endl;
}

void C(int c)                                                                                                           // function C with a parameter int
{
    string output = "C";                                                                                                // string output that print C

    cout << endl;
    
    for(int i = 1; i < c; i++)                                                                                          // for loop to add C to the output when user type's C
    {
        output += output[i];                                                                                            // add output C one by one (C then CC then CCC so on)
        cout << output;
    }

    cout << endl;
}