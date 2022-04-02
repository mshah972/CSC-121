/*

    Exam 1      Question 9
    Moksh Shah  02/12/2022
    Input/Output Data Types IF Selection
    CSC 121

*/

#include <iostream>
using namespace std;

int main()
{
    bool x = true;
    bool y = false;

    cout << "\nxOR = " << (y ^ x);
    cout << "\nAnd = " << (x && y);
    cout << "\nOR = " << (x || y);

    cout << "\nxNOR = " << !(y ^ x);
    cout << "\nNAnd = " << !(x && y);
    cout << "\nNOR = " << !(x || y);

    y = x;
    cout << "\nxOR = " << (y ^ x);
    cout << "\nAnd = " << (x && y);
    cout << "\nOR = " << (x || y);

    cout << "\nxNOR = " << !(y ^ x);
    cout << "\nNAnd = " << !(x && y);
    cout << "\nNOR = " << !(x || y);

    return 0;
}