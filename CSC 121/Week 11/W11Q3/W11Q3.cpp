/*

    Moksh Shah        Discussion Question 3
    Week 11           04/07/2022
    CSC 121           
    Fopen()

*/

#include <iostream>
#include <fstream>
using namespace std;

void userFunc();                                                                                                    // Function Prototype

int main()
{

    userFunc();                                                                                                     // calling userFunc()                               
    
    return 0;
}

void userFunc()
{
    string name;                                                                                                    //string variable to store the name of the user
    int age = 0;                                                                                                    //Declaring variables
    char confirmation = 'y';                                                                                        // Y or N                               

    FILE* w11q3 = fopen("W11Q3.txt", "w");                                                                          // open file for writing                                    
    
    while(confirmation == 'y')                                                                                      //loop to get user input
    {
        cout << "\nEnter your name: ";                                                                              //prompt user for name
        cin >> name;                                                                                                //get user input                                                
        cout << "Enter your age: ";                                                                                 //prompt user for age
        cin >> age;                                                                                                 //get user input

        fprintf(w11q3, "%s\n%d\n", name.c_str(), age);                                                              //write user input to file
        cout << "\nDo you want to enter another name? (y/n): ";                                                       //prompt user for conformation                                 
        cin >> confirmation;                                                                                        //get user input
        cout << endl;
    }
    fclose(w11q3);                                                                                                  //close file                                      

    w11q3 = fopen("W11Q3.txt", "r");
    cout << "Name\tAge" << endl;
    while(!feof(w11q3))                                                                                             //feof() is used to check if the end of file has been reached
    {
        fscanf(w11q3, "%s\n%d\n", name.c_str(), &age);                                                              //fscanf() is used to read the file                                               
        cout << name << "\t" << age << endl;                                                                        
    }
    fclose(w11q3);                                                                                                  //fclose() is used to close the file                                      

}