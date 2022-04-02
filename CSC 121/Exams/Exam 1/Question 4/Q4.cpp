/*

    Exam 1      Question 4
    Moksh Shah  02/12/2022
    Input/Output Data Types IF Selection
    CSC 121

*/

#include <iostream>
using namespace std;

int main()
{
    string name{"Coder"};

    switch(name[2])
    {
        case 'C':
        case 'd':
            cout<< "\n\n1st Case " << endl;
            break;
        case 'o':
        case 'e':
            cout<< "\n\n2nd Case " << endl;
            break;

        case 'r':
            cout<< "\n\n3rd Case " << endl;
            break;
        default:
            cout<< "\n\nWe have defaulted " << endl;
            
    }

    return 0;
}