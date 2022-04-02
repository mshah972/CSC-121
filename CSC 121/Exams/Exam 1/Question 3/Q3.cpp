/*

    Exam 1      Question 3
    Moksh Shah  02/12/2022
    Input/Output Data Types IF Selection
    CSC 121

*/

#include <iostream>
using namespace std;

void a(void);
void b(void);

int main()
{
    string name{ "Rose" };
    string initials = name.substr(0, 3);

    (initials < "Run") ? cout << "\nChoice A " : cout << "\nChoice B ";

    (name[0] <= name[1]) ? a() : b();

    (name <= "Roll") ? a() : b();

    return 0; 
}

void a()
{
    cout << "\nWhat's in a Name " << endl;
}

void b()
{
    cout << "\nCapulet " << endl;
}