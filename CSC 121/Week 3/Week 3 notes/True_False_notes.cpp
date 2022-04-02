/*

    Unit 3 Selection T/F
    Relational Operators
    
*/




#include <iostream>
using namespace std;

int main()
{
    int a{1};

    cout << "Guess a # from 1 - 6\n";           // sentinel
    cin >> a;

    cout << "\nIs guess = 5?" << (a == 5);        // double == make it T/F

    return 0;
}