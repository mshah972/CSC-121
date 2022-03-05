/*

    Week 7      Dicussion Question 2
    Moksh Shah  03/03/2021
    Pushback Names
    CSC 121

*/

#include <iostream>                                                                                                                 // iostream library
#include <vector>                                                                                                                   // vector header file
using namespace std;                                                                                                                // namespace for std

int main()
{
    vector<string> names;                                                                                                           // vector string called names
    string name;                                                                                                                    // string variable for name

    while(name != "exit")                                                                                                           // while loop until user enter "exit"
    {
        cout << "Enter a name (type \"exit\" to exit out the program): ";                                                           // prompt to enter name
        cin >> name;                                                                                                                // stores
        names.push_back(name);                                                                                                      // add a new element at the end of the vector(after its current last element)
    }

    sort(names.begin(), names.end());                                                                                               // using default sort function sort out the names in alphabetically order

    cout << "\n\nNames in alphabetically order: \"";                                                                                

    for(int i = 0; i < names.size(); i++)                                                                                           // for loop to print out names
    {
        if(name != "exit")                                                                                                          // if statement to check for exit
        {
            cout << name << ", ";                                                                                                   // if not then print name
        }
        else                                                                                                                        // else (if name is equal to "exit" then stop printing name and print the default)
        {
            cout << "\"";
            cout << "\n\nThanks for using our program!!";
        }
        
    }

    cout << endl;

    return 0; 
}