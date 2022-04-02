/*

    Week 4      Discussion Question 1
    Moksh Shah  02-08-2022
    Switch/Case
    CSC 121

*/

#include <iostream>
using namespace std;


void funcScore(int score);                                                                                              // global void function

int main()                                                                                                              // main function
{
    
    int score[3] = {1, 2, 3};                                                                                           // int array for score 1, score 2, score 3
    int avg{0};                                                                                                         // int avg for average of 3 scores
    
    cout << "Lets Check your letter grade!\n";                                                                          // greeting cout
    cout << endl;

    cout << "Please enter your 3 scores from 1 to 100: \n";                                                             // prompt to enter 3 scores from 1 to 100
    cin >> score[1] >> score[2] >> score[3];                                                                            // stores all 3 scores in to array score

    avg = (score[1] + score[2] + score[3]) / 3;                                                                         // calculates the average by adding all 3 scores and dividing it by 3

    cout << "\nYour average is " << avg << "\n";

    funcScore(avg);                                                                                                     // call for function funcScore(avg)

    return 0;
}

void funcScore(int score)                                                                                               // function to convert to letter grade by taking in score (avg)
{
    score = score/10;                                                                                                   // dividing the score (avg) by 10 for switch/case

    switch(score)                                                                                                       // switch/case sequences to determine final letter grade
    {
        case 10:
        case 9: cout << "\nYour Average Letter Grade is A, Congrats!! :)\n";                                            // for A grade                      
            break;
        case 8: cout << "\nYour Average Letter Grade is B, Good Job!!\n";                                               // for B grade
            break;
        case 7: cout << "\nYour Average Letter Grade is C, Study More.\n";                                              // for C grade
            break;
        case 6: cout << "\nYour Average Letter Grade is D, join tutoring center.\n";                                    // for D grade
            break;
        default: cout << "\nYour Average Letter Grade is F, :(\n";                                                      // default for F grade
            break;
    }

}