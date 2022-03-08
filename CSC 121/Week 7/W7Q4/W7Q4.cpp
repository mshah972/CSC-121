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
    string name = " ";                                                                          // string variable
    double bill = 0, tax = 0.19, totalBill = 0;                                                 // double variables for amount, tax, & total

   vector<string> vname;                                                                        // vector string for name
   vector<double> vbill;                                                                        // vector double for amount
    
    while (name != "q")                                                                         // while loop with a condition (name is not q)
    {
        cout << "Please enter the name of the bill ('q' to exit): ";                            // prompt to enter the name of the bill
        cin >> name;                                                                            // store
        vname.push_back(name);                                                                  // push back vector name
        cout << endl;                                                                           // new line

        if(name != "q")                                                                         // if statement with a condition (name is not q)
        {
            cout << "Please enter the amount of the bill: ";                                    // prompt to enter the amount
            cin >> bill;                                                                        // store
            vbill.push_back(bill);                                                              // push back vector bill
            cout << endl;                                                                       // new line
            
            totalBill += bill;                                                                  // add total
        }

    }
    
    cout << endl;
    cout << "\"Your total amount without tax is \" : " << totalBill << "\n";                    // prints out the total without tax
    cout << endl;
    
    totalBill = totalBill + (totalBill * tax);                                                  // calculates the total with tax

    cout << "\"Your total amount with tax is \" : " << totalBill << "\n";                       // prints out the total with tax
    cout << endl;

    
    return 0;
}