/*

    Unit 3 Selection T/F
    Relational Operators
    % Modulus 

*/


#include <iostream>
using namespace std;

int main()
{
    cout << "\nTesting Modulus ";
    int n1{53};

    if (n1 % 2 == 0)                                            // is n1 an even #
        cout << "\n\n" << n1 << " is an even # ";

        if (n1 % 2 != 0)                                        // is n1 not even?
            cout << "\n\n" << n1 << " is not even # ";

            if (n1 % 10 > 4)
            {
                cout <<"\nrounding up ";
                n1++; 
            } 

    if (n1 % 5 == 0)
        cout << n1 << " is divisible by 5 ";

    cout << "\n\nWe hope you have enjoyed watching " << endl;


    return 0;
}