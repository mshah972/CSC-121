#include <iostream>
using namespace std;

class Student 
{
    private:
        string name;
        double balance;

    public:
        int id;
    
        Student()
        {
            name = "";
            balance = 0.0;
            id = 0;
        }

        Student(string sName, double sBalance, int sId)
        {
            name = sName;
            balance = sBalance;
            id = sId;
        }
    
    void setName(string n)
    {
        name = n;
    }

    void setBalance(double b)
    {
        balance = b;
    }

    void setId(int i)
    {
        id = i;
    }

    string getName()
    {
        return name;
    }

    double getBalance()
    {
        return balance;
    }

    int getId()
    {
        return id;
    }

    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "ID: " << id << endl;
    }
};