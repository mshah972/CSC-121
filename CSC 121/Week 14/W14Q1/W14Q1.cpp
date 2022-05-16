/*

    Moksh Shah            Discussion Question 1
    Week 14               04/25/2021
    CSC 121
    Member Functions

*/

#include <iostream>
using namespace std;

int main()
{

    int value;                                                                                                      //Declare variable

    cout << "\nBefore a bad value operation, value is: " << value << endl;                                          //Print value before bad operation
    cout << "cin.good() is: " << cin.good() << endl;                                                                //Print cin.good() before bad operation                             
    cout << "cin.fail() is: " << cin.fail() << endl;                                                                //Print cin.fail() before bad operation
    cout << "cin.bad() is: " << cin.bad() << endl;                                                                  //Print cin.bad() before bad operation
    cout << "cin.eof() is: " << cin.eof() << endl;                                                                  //Print cin.eof() before bad operation
    cout << "cin.rdstate() is: " << cin.rdstate() << endl;                                                          //Print cin.rdstate() before bad operation

    cout << "\nExpects an integer value, but instead enter a character: ";                                          //Print message                    
    cin >> value;                                                                                                   //Read value                                   

    cout << "\nAfter a bad value operation, value is: " << value << endl;                                           //Print value after bad operation                  
    cout << "cin.good() is: " << cin.good() << endl;                                                                //Print cin.good() after bad operation
    cout << "cin.fail() is: " << cin.fail() << endl;                                                                //Print cin.fail() after bad operation                              
    cout << "cin.bad() is: " << cin.bad() << endl;                                                                  //Print cin.bad() after bad operation
    cout << "cin.eof() is: " << cin.eof() << endl;                                                                  //Print cin.eof() after bad operation
    cout << "cin.rdstate() is: " << cin.rdstate() << endl;                                                          //Print cin.rdstate() after bad operation

    cin.clear();                                                                                                    //Clear cin

    cout << "\nAfter cin.clear(), value is: " << value << endl;                                                     //Print value after cin.clear()
    cout << "cin.good() is: " << cin.good() << endl;                                                                //Print cin.good() after cin.clear()
    cout << "cin.fail() is: " << cin.fail() << endl;                                                                //Print cin.fail() after cin.clear()

    cout << endl;                                                                                                   //Print new line

    system("pause");                                                                                                //Pause program                                             
    
    
    return 0;

}