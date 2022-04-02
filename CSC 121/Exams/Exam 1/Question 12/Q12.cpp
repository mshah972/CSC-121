/*

    Exam 1      Question 12
    Moksh Shah  02/12/2022
    Input/Output Data Types IF Selection
    CSC 121

*/

#include <iostream>
using namespace std;


int main()
{
    bool x, y;
    bool a = 0;
    bool b = 1;

    x = !(a && b);
    y = !(a || b);

    cout << x << " " << y;

    cout << "\nEnter 0 or 1 for a: ";
    cin >> a;

    cout << "\nEnter 0 or 1 for b: ";
    cin >> b;

    x = !(a && b);
    y = !(a || b);

    cout << x << " " << y;

    return 0;

}