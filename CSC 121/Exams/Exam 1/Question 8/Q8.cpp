/*

    Exam 1      Question 8
    Moksh Shah  02/12/2022
    Input/Output Data Types IF Selection
    CSC 121

*/

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    double b = 8;

    cout << "\n T/F ?" << ((a % 2 != 0) && (a % 3 == 0));

    cout << "\n T/F ?" << ((false || true) && (true || false));
    cout << "\n T/F ?" << ((b < a) || (b == a));
    cout << "\n T/F ?" << ((b > a) && (not(false)));

    cout << "\n T/F ?" << (true ^ false);

    return 0;
}