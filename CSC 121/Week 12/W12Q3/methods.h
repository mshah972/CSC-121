/*

    Moksh Shah      Discussion Question 1
    Week 12         04/15/2022
    CSC 121
    Class

*/

#include <iostream>
#include <string>
using namespace std;

class methods {                                                                     // class methods
    public:                                                                         // public access specifier
        string name;                                                                // string variable name                                 
        int age;                                                                    // integer variable age


        void Display() {                                                            // void method Display                              
            cout << "\nEnter your name: ";                                          // prompt user to enter name
            cin >> name;                                                            // input name                               
            cout << "\nEnter your age: ";                                           // prompt user to enter age                    
            cin >> age;                                                             // input age

            cout << "\nName: " << name << endl;                                     // display name
            cout << "Age: " << age << endl;                                         // display age
            cout << endl;                                                           // end line          

        }

        string getFavSport() {                                                      // void method getFavSport
            return sport;                                                           // return sport                                    
        }

        void setFavSport(string s) {                                                // void method setFavSport                              
            sport = s;                                                              // set sport                              
        }

        string getFavTeam() {                                                       // void method getFavTeam
            return team;                                                            // return team
        }

        void setFavTeam(string t) {                                                 // void method setFavTeam
            team = t;                                                               // set team                                
        }

    private:                                                                        // private access specifier
        string sport = "Cricket";                                                   // string variable sport           
        string team = "India";                                                      // string variable team
};

