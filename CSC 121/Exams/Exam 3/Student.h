

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student
{
    private:
        string id;
        string name;

    public:
        vector<string> classList;

        Student()
        {
            id = "0";
            name = "";
        }

        Student(string sId, string sName)
        {
            id = sId;
            name = sName;
        }

    void setClasses(string sCourses)
    {
        classList.push_back(sCourses);
    }

    void setId(string sId)
    {
        id = sId;
    }

    void setName(string sName)
    {
        name = sName;
    }

    string getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    string getClasses()
    {
        string classes = "";
        for (int i = 0; i < classList.size(); i++)
        {
            classes += classList[i] + ", ";
        }
        return classes;
    }

    void Display()
    {
        cout << "\nStudent ID: " << getId();
        cout << "\nStudent Name: " << getName();
        cout << "\nStudent Courses: " << getClasses();
        cout << endl;
    }

};