/*

    Exam 1      Question 1
    Moksh Shah  02/12/2022
    Input/Output Data Types IF Selection
    CSC 121

*/

#include <iostream>
using namespace std;

int main()
{
    string name{"montague "};

    int age{ 8 };

    int le = name.length();

    if(age >= le)
    {
        cout << "\nNews " << le;
    }
    else
    {
        cout << "\nCartoon " << le;
    }

    if(name[1] < 'n')
    {
        cout << "\n\t1st half";
        age /= 2;
    }
    else
    {
        cout << "\n\t2nd half";
    }

    int x = (age + le * 2) / 4;

    cout << "\n\tx = " << x; 

    return 0;
}