/*

    Week 3      Discussion Question 2
    Moksh Shah  02-02-2022
    If-Else-If-Else
    CSC 121

*/

#include <iostream>
using namespace std;

int score{0};                                                                                               // int to store the score
void grading(int);                                                                                          // declare grading 

int main()
{
    

    cout << "\nPlease enter your 1st score: \n";                                                            // prompt for 1st score
    cin >> score;                                                                                           // store's the score 

    grading(score);                                                                                         // run the grading function using the int score

    cout << "\nPlease enter your 2nd score: \n";                                                            // prompt for 2nd score
    cin >> score;                                                                                           // store's the score
    
    grading(score);                                                                                         // run the grading function for 2nd score


    return 0;
}

void grading(int score)                                                                                     // grading function which takes a int value
{
    
    if (score > 100)                                                                                        // first checks if the score is greater than 100 if it is then it automatically set's it to 100
    {

        score = 100;                                                                                        // set score to 100
        cout << "\nNext time please enter a score in range of 1 to 100\n";                                  // tell's user to not enter a value more than 100

    }

    
    if(score >= 90)                                                                                         // check is the score is greater than 90 or equal to
    {
        cout << "Congrats, You got an A.\n\n";                                                              // congrats the user for their great learning
    }
    else if(score >= 80)                                                                                    // check if the score is greater than 80 or equal to 
    {
        cout << "Not Bad, practice a little more and you can improve you B grade.\n\n";                     // for B
    }
    else if(score >= 70)                                                                                    // check if the score is greater than 70 or equal to
    {
        cout << "You need to work on your study, you got a C use the tutoring center to improve.\n\n";      // for C
    }
    else if(score >= 60)                                                                                    // check if the score is greater than 60 or equal to
    {
        cout << "You got a D, you should ask your professor for an equation you have and study more.\n\n";  // for D
    }
    else                                                                                                    // if the score is less than 60 
    {
        cout << "Unfortuanely, you got a F.\n\n";                                                           // for F
    }
}