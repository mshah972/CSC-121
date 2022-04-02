/*

    Week 4      Discussion Question 2
    Moksh Shah  02-09-2022
    Boolean
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

    cout << "\nYour average is " << avg << "\n";                                                                        // printing the average


    funcScore(avg);                                                                                                     // call for function funcScore(avg)

    return 0;
}

void funcScore(int score)                                                                                               // function to convert to letter grade by taking in score (avg)
{
    bool passing {true};                                                                                                // boolean variable for passing 

    if (score < 60)                                                                                                     // if average score is less than 60 turn the boolean to false
    {
        passing = false;                                                                                                // turning false
    }
    else                                                                                                                // else keep it true
    {
        passing = true;
    }

    if(passing == true)                                                                                                 // if boolean is true then
    {
        if (score >= 90)                                                                                                // check if avg score is 90 or more
        {
            cout << "\nYour Average Letter Grade is A, Congrats!! :)\n";                                                // for A grade
        }
        else if (score >= 80)                                                                                           // if avg score is 80 or more
        {
            cout << "\nYour Average Letter Grade is B, Good Job!!\n";                                                   // for B grade
        }
        else if (score >= 70)                                                                                           // if avg score is 70 or more
        {
            cout << "\nYour Average Letter Grade is C, Study More.\n";                                                  // for C grade
        }
        else                                                                                                            // if avg is less than 70 and more than 60 then default
        {
            cout << "\nYour Average Letter Grade is D, join tutoring center.\n";                                        // for D grade
        }
    }
    else                                                                                                                // if avg score is less then 60 the boolean false and default
    {
        cout << "\nYour Average Letter Grade is F, :(\n";                                                               // for F grade
    }
}