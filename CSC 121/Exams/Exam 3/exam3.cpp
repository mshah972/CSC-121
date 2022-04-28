#include <iostream>
#include "Student.h"
using namespace std;


int main()
{

    string name;
    string id;

    Student s1(id, name);

    system("cls");

    cout << "\n\tWELCOME TO HARPER COLLEGE\n";

    cout << "\nEnter your name: ";
    getline(cin, name);

    cout << "\nEnter your ID: ";
    getline(cin, id);

    s1.setName(name);
    s1.setId(id);
    s1.setClasses("CSC 121");

    s1.Display();

    cout << endl;
    
    system("pause");

    s1.setClasses("MTH 200");
    s1.setClasses("ECO 212");

    cout << endl;

    system("cls");

    cout << "\n\tWELCOME TO HARPER PORTAL\n";

    s1.Display();

    cout << endl;

    system("pause");


    return 0;

}