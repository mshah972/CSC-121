/*

    Week 7      Dicussion Question 4
    Moksh Shah  03/05/2021
    Accounting
    CSC 121

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string name;
    double bill = 0, tax = 0.19, totalBill = 0;

    cout << "Please enter the name of the bill ('q' to exit): ";
    cin >> name;
    cout << endl;
    
    while (name != "q")
    {
        cout << "Please enter the name of the bill ('q' to exit): ";
        cin >> name;
        cout << endl;
    }
    



    return 0;
}