/*

    Week 4      Discussion Question 3
    Moksh Shah  02-10-2022
    Boolean Variables
    CSC 121

*/

#include <iostream>                                                                                     // iostream library
using namespace std;                                                                                    // namespace for std

int main()
{
    bool x{true}, y{true};                                                                              // 2 boolean variable that are set true as default

    cout << "\n\nThis is for X and Y: \n";                                                              // print sequences for X && Y
    cout << "X is True and Y is True: " << ((x = true) && (y = true)) << "\n"                           // x = true && y = true
        << "X is True and Y is False: " << ((x = true) && (y = false)) << "\n"                          // x = true && y = false
        << "X is False and Y is True: " << ((x = false) && (y = true)) << "\n"                          // x = false && y = true
        << "X is False and Y is False: " << ((x = false) && (y = false)) << "\n";                       // x = false && y = false
    
    cout << "\n\nThis is for X || Y: \n";                                                               // print sequences for X || Y
    cout << "X is True || Y is True: " << ((x = true) || (y = true)) << "\n"                            // x = true || y = true
        << "X is True || Y is False: " << ((x = true) || (y = false)) << "\n"                           // x = true || y = false
        << "X is False || Y is True: " << ((x = false) || (y = true)) << "\n"                           // x = false || y = true
        << "X is False || Y is False: " << ((x = false) || (y = false)) << "\n";                        // x = false || y = false

    cout << "\n\nThis is for X ^ Y: \n";                                                                // print sequences for X ^ Y
    cout << "X is True ^ Y is True: " << ((x = true) ^ (y = true)) << "\n"                              // x = true ^ y = true
        << "X is True ^ Y is False: " << ((x = true) ^ (y = false)) << "\n"                             // x = true ^ y = false
        << "X is False ^ Y is True: " << ((x = false) ^ (y = true)) << "\n"                             // x = false ^ y = true
        << "X is False ^ Y is False: " << ((x = false) ^ (y = false)) << "\n\n";                        // x = false ^ y = false

    return 0;
}