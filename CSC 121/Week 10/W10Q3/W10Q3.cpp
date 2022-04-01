/*

    Moksh Shah      Discussion Question 3
    CSC 121        Week 10
    Created:       04/01/2022
    Fstream

*/

#include <iostream>
#include <fstream>
#include <string>
#include <random>
using namespace std;

int main()
{
    string fName, lName;                                                                                                                        //Declare variables
    char fInitial;                                                                                                                              //Declare variables
                             
    for (int i = 0; i < 3; i++)                                                                                                                 // for loop to run 3 times
    {
        
        cout << "\nEnter your employee's first name: ";                                                                                         //prompt for first name
        cin >> fName;                                                                                                                           //input first name

        cout << "\nEnter your employee's last name: ";                                                                                          //prompt for last name
        cin >> lName;                                                                                                                           //input last name

        fInitial = fName[0];                                                                                                                    //fInitial = first name's first letter

        fstream employeeFile;                                                                                                                   //fstream variable
        employeeFile.open("employee.txt", ios::out | ios::app);                                                                                 //open employee.txt file in out and append mode

        if (employeeFile.is_open())                                                                                                             //if employeeFile is open
        {
            employeeFile << fInitial << "_" << lName << "@company.com" << "\n" << endl;                                                         //write to employee.txt file                          
            employeeFile.close();                                                                                                               //close employee.txt file
        }
        else                                                                                                                                    //else
        {
            cout << "Error opening file." << endl;                                                                                              //display error message
        }
        cout << endl;
        cout << "Employee " << fName << " " << lName << " has been added to the database." << endl;                                             //display employee added message
        cout << endl;                                                                                                                           //display endl

    }



    cout << "\nEMPLOYEE EMAIL ADDRESSES\n\n";                                                                                                   //display employee email addresses

    fstream employeeFile2;                                                                                                                      //fstream variable                                                    
    employeeFile2.open("employee.txt", ios::in);                                                                                                //open employee.txt file in input mode                                     

    if (employeeFile2.is_open())                                                                                                                //if employeeFile2 is open
    {
        while (!employeeFile2.eof())                                                                                                            //while employeeFile2 is not at end of file
        {
            getline(employeeFile2, fName);                                                                                                      //getline fName from employeeFile2                                                    
            cout << fName << endl;                                                                                                              //display fName                                                                                                          
        }
        employeeFile2.close();                                                                                                                  //close employeeFile2
    }
    else                                                                                                                                        //else
    {
        cout << "Error opening file." << endl;                                                                                                  //display error message
    }

    return 0;
}