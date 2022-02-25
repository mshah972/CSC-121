/*

    Week 6      Dicussion Question 1
    Moksh Shah  02/22/2021
    Protected Data
    CSC 121

*/

#include <iostream>
#include <unistd.h>
using namespace std;


int data(string);

int main()
{
    int score, total = 0;                                                                           // int variable for score & total
    char prompt;                                                                                    // char variable for (y/n)

    score = data("Please enter a your score: ");                                                    // prompting user input using protected data function
    total += score;                                                                                 // adding the score to get the total

    cout << "\nDo you want to enter any other scores (y/n): ";                                      // asking the user to see if they want enter another number
    cin >> prompt;                                                                                  // storing char

    prompt = tolower(prompt);                                                                       // making char lowercase

    while(prompt == 'y')                                                                            // while loop if user entered 'y'
    {
        score = data("\nPlease enter a your other score: ");                                        // prompting user input again using protected data function 
        total += score;                                                                             // adding to the overall total
        cout << "\nDo you want to enter any other scores (y/n): ";                                  // asking again to see if they want to add more score
        cin >> prompt;                                                                              // storing char
    }

    cout << "\n\nYour total score is " << total << "\n\n";                                          // printing out the total

    return 0;
}

int data(string userInput)                                                                          // int data function with string input
{
    int score;                                                                                      // int variable for score

    cout << userInput;                                                                              // prompting user provide string
    cin >> score;                                                                                   // storing score

    bool tFlag = false;                                                                             // boolean variable true flag set to false

    while(tFlag == 0)                                                                               // while loop to check for correct data
    {
        if(score > 0 && score <= 100)                                                               // if statement to check if score is in range
        {
            tFlag = true;                                                                           // set bool to true
        }
        else                                                                                        // else
        {
            cin.clear();                                                                            // clears the user input
            cin.ignore();                                                                           // ignore the last input
            cout << "\nPlease enter a valid score between 1 - 100: ";                               // ask again to enter score in range
            cin >> score;                                                                           // store score
        }
    }

    return score;                                                                                   // return score
}
