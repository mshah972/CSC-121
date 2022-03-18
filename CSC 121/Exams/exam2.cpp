

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string fName, sName;                                                                                    // string variables


    cout << endl;
    cout << "Please enter your 1 name: ";                                                                   // prompt for first name 
    cin >> fName;

    cout << endl;
    cout << "Please enter your 2 name: ";                                                                   // prompt for last name        
    cin >> sName;

    int fLetter[26] = {0};
    int sLetter[26] = {0};

    char common, ch = 'a';

    int q = (int)ch, w;

    for(int i = 0; i < fName.length(); i++)
    {
        fLetter[(int)fName[i] - q]++;
    }


    return 0;
}
