/*

    Moksh Shah      Discussion Question 2
    CSC 121        Week 10
    Created:       04/01/2022
    Ifstream 

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;                                                                                                        //string to hold name
    int age;                                                                                                            //int to hold age

    ofstream outFile;                                                                                                   //output file stream                        
    outFile.open("W10Q2.txt");                                                                                          //open output file
    outFile.clear();                                                                                                    //clear output file
    outFile.close();                                                                                                    //close output file                                 

    cout << "\nPlease enter your name (or q to quit): ";                                                                //prompt user for name
    cin >> name;                                                                                                        //get name from user

    cout << "\nPlease enter your age (or -5 to quit): ";                                                                //prompt user for age
    cin >> age;                                                                                                         //get age from user

    while(name != "q" && age != -5)                                                                                      //while loop for name
    {
        ofstream outFile;                                                                                               //ofstream for outFile
        outFile.open("W10Q2.txt", ios::app);                                                                            //opening the file W10Q2.txt
        outFile << "\tName: " << name << "\n\tAge: " << age << "\n" << endl;                                            //writing the name and age to the file
        outFile.close();                                                                                                //closing the file

        cout << "\nPlease enter your name (or q to quit): ";                                                            //prompt user for name
        cin >> name;                                                                                                    //get name from user

        if(name != "q")                                                                                                 //if statement for name
        {
            cout << "\nPlease enter your age (or -5 to quit): ";                                                        //prompt user for age
            cin >> age;                                                                                                 //get age from user
        }
        else
        {
            cout << "\nNAMES AND AGE WRITTEN IN THE FILE: \n" << endl;                                                  //print goodbye if user enters q
        }

    }

    ifstream inFile;                                                                                                    //ifstream for inFile
    inFile.open("W10Q2.txt");                                                                                           //opening the file W10Q2.txt
    string line;                                                                                                        //string to hold line
    while(getline(inFile, line))                                                                                        //while loop for line
    {
        cout << line << endl;                                                                                           //printing the line
    }
    inFile.close();                                                                                                     //closing the file


    cout << endl;


    return 0;
}