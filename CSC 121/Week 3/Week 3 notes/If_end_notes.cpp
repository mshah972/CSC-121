/*

    Unit 3 Selection T/F
    Relational Operators
    If & End If statements

*/


#include <iostream>
using namespace std;

int main()
{
    cout << "\nTesting IF statements ";
    int a{0};

    start:                                  // label

        if(a < 0)                                           // test & display if a is -#
            cout << "\n" << a << " is a neagative # "; 
        
        if (a > 0)                                          // test for a = +#
            cout << "\n" << a << " is a positive # ";
        
        if (a == 0)                                         // test for a = 0
            cout << "\n" << a << " is a 0 and is slightly positive ";

        if (a == 0)
        {                                                   // test for start # add 3 to activate IF # 2
            a = a + 3;
            goto start;                                     // goto
        }

        if (a > 0)
        {                                                   // finally flip the polarity to activate the 1st 
            a = a * -1;
            goto start;
        }

        cout << "\n\n We hope you have enjoyed watching " << endl;

        return 0;

}