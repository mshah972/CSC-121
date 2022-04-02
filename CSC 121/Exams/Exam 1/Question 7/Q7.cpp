/*

    Exam 1      Question 7
    Moksh Shah  02/12/2022
    Input/Output Data Types IF Selection
    CSC 121

*/

#include <iostream>
using namespace std;

int main()
{
    int a{2};
    int b{11};
    int c{1};

    cout << "\n\nEnter 3 #'s ";
    cin >> a >> b >> c;

    if(a > b && a > c)
    {
        cout << "\n\n" << a << " is the largest ";
    }
    else if(a > b || a > c)
    {
        cout << "\n\n" << a << " is the middle # ";
    }

    if(b > c && b > a)
    {
        cout << "\n\n" << b << " is the largest ";
    }
    else if(b > c || b > a)
    {
        cout << "\n\n" << b << " is the middle # ";
    }

    if(c > a && c > b)
    {
        cout << "\n\n" << c << " is the largest ";
    }
    else if(c > a || c > b)
    {
        cout << "\n\n" << c << " is the middle # ";
    }
    

    return 0;
}