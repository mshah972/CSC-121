/*

    Moksh Shah            Discussion Question 3
    Week 13               04/20/2021
    CSC 121
    UML Employee

*/

#include <iostream>                                             
#include <string>
using namespace std;

class Employee{                                                         // Employee class

    private:                                                            // private variables                            
        string name;                                                    // name of employee                         
        int id;                                                         // id of employee
        double salary;                                                  // salary of employee                      


    public:                                                             // public functions

        Employee()                                                      // default constructor
        {
            name = "a";                                                 // default name
            id = 123456789;                                             // default id                                
            salary = 10000;                                             // default salary
        }

        Employee(string eName, int eId, double eSalary)                 // main constructor
        {   
            name = eName;                                               // name of employee                            
            id = eId;                                                   // id of employee
            salary = eSalary;                                           // salary of employee                      
        }      

        void setName(string eName)                                      // set name function
        {
            name = eName;                                               // set name                
        }

        void setId(int eId)                                             // set id function
        {
            id = eId;                                                   // set id              
        }

        void setSalary(double eSalary)                                  // set salary function
        {
            salary = eSalary;                                           // set salary
        }

        string getName()                                                // get name function
        {
            return name;                                                // return name                              
        }

        int getId()                                                     // get id function
        {
            return id;                                                  // return id                          
        }

        double getSalary()                                              // get salary function
        {
            return salary;                                              // return salary                          
        }

        void print()                                                    // print function
        {
            cout << "\n\nName: " << name << endl;                       // print name          
            cout << "ID: " << id << endl;                               // print id            
            cout << "Salary: " << salary << endl;                       // print salary           
        }


};