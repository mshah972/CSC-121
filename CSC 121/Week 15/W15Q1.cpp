/*

    Moksh Shah            Discussion Question 1
    Week 15               05/02/2022
    CSC 121
    Research Project

*/

#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char lowercase[3] = {'a', 'b', 'c'};
    char uppercase[3] = {'A', 'B', 'C'};

    for(int i = 0; i < 3; i++)
    {
        bool isLowercase = false;
        bool isUppercase = false;

        if(islower(lowercase[i]))
        {
            isLowercase = true;
        }

        if(islower(uppercase[i]))
        {
            isUppercase = false;
        }

        if(isLowercase)
        {
            cout << "\n";
            cout << lowercase[i] << " is a lowercase letter," << endl;
        }

        if(!isUppercase)
        {
            cout << "\n";
            cout << uppercase[i] << " is an uppercase letter," << endl;
        }

    }

    cout << "\n\n\t\t******************************************************\n";
    cout << "\t\t\t\tLET'S CHANGE LETTERS\n";
    cout << "\t\t******************************************************\n";


    for(int i = 0; i < 3; i++)
    {
        bool isLowercase = true;
        bool isUppercase = false;

        char Lowletter = toupper(lowercase[i]);
        char Upletter = tolower(uppercase[i]);

        if(isupper(Lowletter))
        {
            isLowercase = false;
        }

        if(islower(Upletter))
        {
            isUppercase = true;
        }


        if(!isLowercase)
        {
            cout << "\n";
            cout << Lowletter << " is now a uppercase letter (was a lowercase)," << endl;
        }

        if(isUppercase)
        {
            cout << "\n";
            cout << Upletter << " is now a lowercase letter (was a uppercase)," << endl;
        }

        cout << endl;
    }


    cout << "\n";

    system("pause");

    return 0;
}
