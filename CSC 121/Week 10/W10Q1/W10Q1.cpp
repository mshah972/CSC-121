/*

    Moksh Shah     Discussion Question 1
    CSC 121        Week 10  03/31/2022
    Ofstream 

*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name;                                                                                                      // string for name

    cout << "\n\tEnter your name or (q to quit): ";                                                                   // asking for name
    cin >> name;                                                                                                      // taking name

    while(name != "q")                                                                                                // while loop for name
    {
        ofstream outFile;                                                                                             // ofstream for outFile
        outFile.open("names.txt", ios::app);                                                                          // opening the file names.txt
        outFile << name << endl;                                                                                      // writing the name to the file
        outFile.close();                                                                                              // closing the file

        cout << "\n\tEnter your name or (q to quit): ";                                                               // asking for name
        cin >> name;                                                                                                  // taking name
    }

    cout << endl;
    
    return 0;
}