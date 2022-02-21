/*

    Week 5      Discussion Question 4
    Moksh Shah  02-18-2022
    Telling Time
    CSC 121

*/
/*******************************************
            EXTRA CREDIT
 ******************************************/
#include <ctime>                                                                                                    // ctime library to display the computer actual time


#include <iostream>                                                                                                 // iostream library
#include <unistd.h>                                                                                                 // header file for universal operating system API (because i am using Mac i can't use window.h)
using namespace std;                                                                                                // namespace for std

int main()
{

    time_t ttime = time(0);                                                                                         // implement time intervals

    char* dt = ctime(&ttime);                                                                                       // a char* is a pointer to the starting location
    


    for(int i = 0; i <= 12; i++)                                                                                    // for loop for hours (i)
    {
        for(int j = 0; j < 60; j++)                                                                                 // for loop for minutes (j)
        {
            for(int k = 0; k < 60; k++)                                                                             // for loop for seconds (k)
            {
                cout << "Current Time : " << i << ":" << j << ":" << k << endl;                                     // prints out our clock "Current Time : 0:0:0"
                usleep(100000);                                                                                     // wait for 1 sec (alternative for Sleep(1000))
                system("clear");                                                                                    // clear the terminal for a better presentation
                cout << "System Actual Time: " << dt << endl;                                                       // prints out current computer actual time
            }
        }
    }

    return 0;
}