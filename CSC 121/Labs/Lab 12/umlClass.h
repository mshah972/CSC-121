/*

    Moksh Shah      04/17/2022
    Lab 12          CSC 121
    UML Class 

*/

#include <iostream>
#include <string>
using namespace std;

class uml {                                                                             // class uml                  
    
    public:                                                                             // public access specifier             
        string name;                                                                    // string variable name         

    void setDeposit(int amount){                                                        // void method setDeposit           
        balance += amount;                                                              // add amount to balance          
    }

    void setWithdraw(int amount){                                                       // void method setWithdraw  
        balance -= amount;                                                              // subtract amount from balance       
    }

    string getName(){                                                                   // void method getName         
        return name;                                                                    // return name          
    }

    int getId(){                                                                        // void method getId            
        return id;                                                                      // return id      
    }

    double getBalance(){                                                                // void method getBalance      
        return balance;                                                                 // return balance
    }

    private:                                                                            // private access specifier
        int id {123};                                                                   // integer variable id
        double balance {0.1};                                                           // double variable balance             


};