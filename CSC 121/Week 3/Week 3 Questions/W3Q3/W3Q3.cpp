/*

    Week 3      Discussion Question 3
    Moksh Shah  02-02-2022
    Conditional Operators C-Op
    CSC 121

*/

#include <iostream>
using namespace std;

int main()
{
    int score{0};                                                                                                // int for score

    cout << "\nPlease enter your score: \n";                                                                     // prompt the user to enter their score
    cin >> score;                                                                                                // store's the score

    score > 100 ?                                                                                                // check if the score is > 100
        cout << "Please enter a score in range of 1 to 100.\n" :                                                // notify the user to enter in between 1 to 100 and end the program
            score > 90 ?                                                                                        // check if the score is > 90         
                cout << "Congrats you got an A.\n\n":                                                           // gives a A
                    score > 80 ?                                                                                // check if < 90 and > 80
                        cout << "Good job, you got a B.\n\n":                                                   // gives a B
                            score > 70 ?                                                                        // check if < 80 and > 70
                                cout << "You need to study a little bit more, you got a C.\n\n":                // gives a C
                                    score > 60 ?                                                                // check if < 70 and > 60
                                        cout << "You should to tutoring center if you have any questions, you got a D.\n\n":    // gives a D
    
                                            cout << "Unfortunatley, you got a F.\n\n";                          // if < 60 then give a F (default)

    return 0;
}