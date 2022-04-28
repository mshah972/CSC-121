/*

    Moksh Shah            Discussion Question 3
    Week 13               04/20/2021
    CSC 121
    UML Employee

*/

#include <iostream>
#include <string>
#include "Employee.h"                                                           // Employee class
using namespace std;

int main()
{
    Employee emp;                                                               // Employee object

    string name;                                                                // name of employee
    int id;                                                                     // id of employee
    double salary;                                                              // salary of employee

    emp.print();                                                                // print employee info

    cout << "\n\nEnter the name of the employee: ";                             // get name of employee
    getline(cin, name);                                                         

    cout << "\nEnter the ID of the employee: ";                                 // get id of employee
    cin >> id;

    cout << "\nEnter the salary of the employee: ";                             // get salary of employee
    cin >> salary;

    Employee emp2(name, id, salary);                                            // Employee object with parameters

    emp2.print();                                                               // print employee info

    cout << endl;

    return 0;
}