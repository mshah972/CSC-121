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
    string name = " ";
    double bill = 0, tax = 0.19, totalBill = 0;

   vector<string> vname;
   vector<double> vbill;
    
    while (name != "q")
    {
        cout << "Please enter the name of the bill ('q' to exit): ";
        cin >> name;
        vname.push_back(name);
        cout << endl;

        if(name != "q")
        {
            cout << "Please enter the amount of the bill: ";
            cin >> bill;
            vbill.push_back(bill);
            cout << endl;
            totalBill += bill;
        }

    }
    
    cout << endl;
    cout << "\"Your total amount without tax is \" : " << totalBill << "\n";
    cout << endl;
    
    totalBill = totalBill + (totalBill * tax);

    cout << "\"Your total amount with tax is \" : " << totalBill << "\n";
    cout << endl;

    
    return 0;
}