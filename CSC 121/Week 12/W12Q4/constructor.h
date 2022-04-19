/*

    Moksh Shah      Discussion Question 4
    Week 12         04/15/2022
    CSC 121
    Constructors

*/

#include <iostream>
#include <string>
using namespace std;

class Student                                                                           // class called Student
{
    public:                                                                             // public access specifier
        
        Student()                                                                       // Default constructor
        {
            name = "John Wilson";
            age = 25;
        }


        Student(string sName, int sAge)                                                 // constructor with paramenters
        {
            name = sName;                                                               // set the name                                   
            age = sAge;                                                                 // set the age
        }
        
        void setName(string sName)                                                      // set name function
        {
            name = sName;                                                               // set the name                        
        }
        
        void setAge(int sAge)                                                           // set age function
        {
            age = sAge;                                                                 // set the age
        }
        
        string getName()                                                                // get name function
        {
            return name;                                                                // return the name                          
        }
        
        int getAge()                                                                    // get age function
        {
            return age;                                                                 // return the age                        
        }

    private:                                                                            // private access specifier                     
        string name{};                                                                  // string variable called name                                
        int age = 0;                                                                    // integer variable called age                              
};  