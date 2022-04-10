/*

    Moksh Shah        Discussion Question 2
    Week 11           04/04/2022
    CSC 121           
    Pass-by-Reference Pointers

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int x = 10;                                                                     //x is 10                                
    int *ptr = &x;                                                                  // ptr is a pointer to x
    int **ptr2 = &ptr;                                                              // ptr2 is a pointer to a pointer to an int

    cout << endl;

    cout << "x is " << x << endl;                                                   // x is 10
    cout << "The memory address of x is " << ptr << endl;                           // ptr is 0x7fff5fbffa80
    cout << "The memory address of ptr is " << ptr2 << endl;                        // ptr2 is 0x7fff5fbffa80

    cout << "*ptr is " << *ptr << endl;                                             // *ptr is 10
    cout << "**ptr2 is " << **ptr2 << endl;                                         // **ptr2 is 10

    cout << endl;

    return 0;
}