/*

    Week 8      Dicussion Question 5
    Moksh Shah  03/11/2021
    Call - by - Reference
    CSC 121

*/

#include <iostream>
using namespace std;

int xvalue(int);                                                                                    // initializing xvalue function
int yreference(int*);                                                                               // initializing yreference function

int main()                                                                                          // main function
{
    int x, y;                                                                                       // int variable for x and y

    cout << endl;
    cout << "Please enter x number: ";                                                              // prompt for x
    cin >> x;
    cout << endl;

    cout << "Please enter y number: ";                                                              // prompt for y
    cin >> y;
    cout << endl;

    cout << "x * x = " << xvalue(x) << endl;                                                             // multiplying x with x and calling xvalue function

    cout << "y * y = " << yreference(&y) << endl;                                                        // multiplying y with y and calling yreference function

    cout << endl;

    return 0;
}

int xvalue(int n)                                                                                   // function xvalue with parameter int
{
    return n = n * n;                                                                               // multiplying input number with same number
}

int yreference(int* n)                                                                              // function yreference with parameter int
{
    return *n = *n * *n;
}