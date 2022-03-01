/*

    Week 6      Dicussion Question 4
    Moksh Shah  02/22/2021
    Counters
    CSC 121

*/

#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int seconds = 0, minutes = 0, hours = 0;                                                                                        // int variables for hours, minutes, and seconds

    while(hours < 24)                                                                                                               // while loop if hours is < 24
    {
        while(minutes < 60)                                                                                                         // while loop if minutes is < 60
        {
            while(seconds < 60)                                                                                                     // while loop if seconds is < 60
            {
                cout << "Hours : " << hours << " :: Minutes : " << minutes << " :: Seconds : " << seconds;                          // prints the timer
                cout << endl;                                                                                                       // new line
                seconds++;                                                                                                          // increment seconds by 1
                usleep(1000000);                                                                                                    // wait for 1 second
                system("clear");                                                                                                    // clears the terminal for better presentation
            }
            seconds = 0;                                                                                                            // set seconds to 0 if exit out the while loop
            minutes++;                                                                                                              // increment mintues by 1
        }
        minutes = 0;                                                                                                                // set minutes to 0 if exit out the while loop
        hours++;                                                                                                                    // increment hours by 1
    }
    hours = 0;                                                                                                                      // set hours to 0 is exit out the while loop


    return 0;
}