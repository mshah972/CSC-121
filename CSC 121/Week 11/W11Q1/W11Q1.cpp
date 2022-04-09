/*

    Moksh Shah        Discussion Question 1
    Week 11           04/04/2022
    CSC 121           
    Pointers

*/


/***************************************************************************************************************************************************************************

    Pointers are used to reference a variable. They stores the address of the variable. The address of a variable is the memory location of the variable. 
    Using pointers, we can allocate a new object in memory and assign it to a variable, we can also use to pass variable addresses to other functions.
    Pointers are called by using the * symbol before the variable name. For example, if we have a int variable called x, we can declare a int pointer called int *xPtr = &x; 
    This means that xPtr is a pointer to an int variable.

****************************************************************************************************************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 10;                                                                     // x is 10
    int *ptr = &x;                                                                  // ptr is a pointer to x

    char y = 'A';                                                                   // y is 'A'                                    
    char *ptr2 = &y;                                                                // ptr2 is a pointer to y

    string z = "Hello CSC 121!";                                                    // z is "Hello CSC 121!"                                    
    string *ptr3 = &z;                                                              // ptr3 is a pointer to z

    cout << endl;

    cout << "The value of x is: " << x << endl;                                     // prints 10
    cout << "The value of y is: " << y << endl;                                     // prints A
    cout << "The value of z is: " << z << endl;                                     // prints Hello CSC 121!

    cout << endl;

    cout << "The value of ptr x is: " << *ptr << endl;                              // prints 10
    cout << "The value of ptr y is: " << *ptr2 << endl;                             // prints A                  
    cout << "The value of ptr z is: " << *ptr3 << endl;                             // prints Hello CSC 121!                     

    cout << endl;


    return 0;

}

