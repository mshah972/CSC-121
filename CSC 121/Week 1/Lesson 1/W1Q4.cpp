/*

    Week 1 Disscusion Board Question 4
    Moksh Shah 01/20/2022

*/

#include <iostream>     // needed for std::cout <<
#include <iomanip>      // needed for setw()
using namespace std;    // use to ignore std::

int main()
{
    cout << "Moksh Shah --- 01/20/2022 --- Lab # \n"        // prints name, date, and lab #'s
         << setw(35)                                        // This is set the width to 35
         << "Week 1 Disscusion Question 4 \n"               // prints title
         << setw(40)                                        // this is set the width to 40
         << "Escape Seq & Setw() \n";                       // prints topic
}