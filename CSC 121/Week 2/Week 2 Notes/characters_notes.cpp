/*

    Characters types

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "\n\nCreate and display characters ";       // title

    char x{ 'a' };                                      // type char ==> 1 letter
    char y{ 'z' };                                      // type char ==> 1 letter
                                                        // name ==> x
    cout << "\n\nstarting x " << x << "\n";             
    cout << "\n\nstarting y " << y << "\n";             

    cout << "\n\n\tPlease enter a character ";
    cin >> x;                                           // value = 'A'
    cout << "You entered " << x << "\n";                // Casting the character as an int will yield the ascii code in decimal

    cout << "\n\n\tPlease enter a character ";
    cin >> y;
    cout << "You entered " << y << "\n";

    return 0;

}