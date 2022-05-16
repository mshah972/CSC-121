/*

    Moksh Shah            Discussion Question 3
    Week 14               04/25/2021
    CSC 121
    Simple Blackjack Game

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void Shuffle(bool baCardsDealt);
void printCard(int iCard);
void printHand(int iaHand[], int kiCardCount);
void printScore(int iaHouseHand[], int kiHouseCardCount, int iaPlayerHand[], int kiPlayerCardCount);
int nextCard(bool baCardsDealt);
int ScoreHand(int iaHand[], int kiCardCount);

int main()
{
    time_t t;
    time(&t);
    srand(t);

    bool baCardsDealt[52];
    int iaHouseHand[12];
    int iHouseCardCount = 0;
    int iPlayerCardCount = 0;
    int iaPlayerHand[12];

    while(true)
    {
        Shuffle(baCardsDealt);

        iaPlayerHand[0] = nextCard(baCardsDealt);
        iaHouseHand[0] = nextCard(baCardsDealt);
        iaPlayerHand[1] = nextCard(baCardsDealt);
        iaHouseHand[1] = nextCard(baCardsDealt);
        iHouseCardCount = 2;
        iPlayerCardCount = 2;

        cout << "\n\n\t\tNEW HAND\n\n";

        char cPlayerChoice;
        bool bPlayerHits = true;
        int iPlayerScore = ScoreHand(iaPlayerHand, iPlayerCardCount);

        while(bPlayerHits && iPlayerScore < 22)
        {
            cout << "\n\n\t\tYOUR HAND\n\n";
            printHand(iaPlayerHand, iPlayerCardCount);
            cout << "\n\n\t\tYOUR SCORE: ";
            printScore(iPlayerScore);

            cout << "\n\n\t\tDEALER'S HAND\n\n";
            cout << "** ";
            printHand(iaHouseHand[1]);

            cout << "\n\n\t\tDO YOU WANT TO HIT (Y/N)? ";
            cin >> cPlayerChoice;

            if(cPlayerChoice == 'Y' || cPlayerChoice == 'y')
            {
                iaPlayerHand[iPlayerCardCount] = nextCard(baCardsDealt);
                iPlayerCardCount++;
            }
            else if(cPlayerChoice == 'N' || cPlayerChoice == 'n')
            {
                bPlayerHits = false;
            }
            else
            {
                cout << "\n\n\t\tINVALID INPUT\n\n";
            }

            cout << endl;

            iPlayerScore = ScoreHand(iaPlayerHand, iPlayerCardCount);
        }

        if (iPlayerScore > 21)
        {
            cout << "\n\n\t\tYOU BUSTED!\n\n";
            cout << "\n\n\t\t***DEALER WINS!***\n\n";
            printScore(iaHouseHand, iHouseCardCount, iaPlayerHand, iPlayerCardCount);
        }
        else
        {
            cout << "\n\n\t\tYOU STILL HAVE A SCORE OF: ";
            printScore(iPlayerScore);

            int iHouseScore = ScoreHand(iaHouseHand, iHouseCardCount);

            while(iHouseScore < 17)
            {
                iaHouseHand[iHouseCardCount] = nextCard(baCardsDealt);
                iHouseCardCount++;
                iHouseScore = ScoreHand(iaHouseHand, iHouseCardCount);
            }

            bool bHouseBust = (iHouseScore > 21);

            if(bHouseBust)
            {
                cout << "\n\n\t\tDEALER BUSTED!\n\n";
                cout << "\n\n\t\t***YOU WIN!***\n\n";
                printScore(iaPlayerHand, iPlayerCardCount, iaHouseHand, iHouseCardCount);
            }
            else
            {
                if(iPlayerScore == iHouseScore)
                {
                    cout << "\n\n\t\t***YOU TIED!***\n\n";
                    printScore(iaPlayerHand, iPlayerCardCount, iaHouseHand, iHouseCardCount);
                }
                else if(iPlayerScore > iHouseScore)
                {
                    cout << "\n\n\t\t***YOU WIN!***\n\n";
                    printScore(iaPlayerHand, iPlayerCardCount, iaHouseHand, iHouseCardCount);
                }
                else
                {
                    cout << "\n\n\t\t***DEALER WINS!***\n\n";
                    printScore(iaPlayerHand, iPlayerCardCount, iaHouseHand, iHouseCardCount);
                }
            }
        }
    }

    return 0;
}

void Shuffle(bool baCardsDealt)
{
    for(int i = 0; i < 52; i++)
    {
        baCardsDealt[i] = false;
    }
}

int nextCard(bool baCardsDealt)
{
    bool bCardDealt = true;
    int iNewCard = -1;

    while(bCardDealt)
    {
        iNewCard = rand() % 52;
        if(!baCardsDealt[iNewCard])
        {
            bCardDealt = false;
        }
    }

    return iNewCard;
}

int ScoreHand(int iaHand[], const int kiCardCount)
{
    int iScore = 0;
    int iAceCount = 0;

    for(int i = 0; i < kiCardCount; i++)
    {
        int kiNextCard = iaHand[i];
        int kiRank = kiNextCard % 13;

        if(kiRank == 0)
        {
            iScore++;
            iAceCount++;
        } 
        else if(kiRank > 0 && kiRank < 10)
        {
            iScore = iScore + (kiRank + 1);
        } 
        else
        {
            iScore = iScore + 10;
        }
    }

    while(iAceCount > 0 && iScore < 12)
    {
        iScore = iScore + 10;
        iAceCount--;
    }

    return iScore;
}

void printHand(int iaHand[], int kiCardCount)
{
    for(int i = 0; i < kiCardCount; i++)
    {
        int kiNextCard = iaHand[i];
        printCard(kiNextCard);
        cout << " ";
    }

    cout << endl;
}

void printCard(int iCard)
{
    int kiRank = iCard % 13;

    if(kiRank == 0)
    {
        cout << "'ACE'";
    }
    else if(kiRank > 0 && kiRank < 9)
    {
        cout << kiRank + 1;
    }
    else if(kiRank == 9)
    {
        cout << "'TEN'";
    }
    else if(kiRank == 10)
    {
        cout << "'JACK'";
    }
    else if(kiRank == 11)
    {
        cout << "'QUEEN'";
    }
    else 
    {
        cout << "'KING'";
    }

    int kiSuit = iCard / 13;

    if(kiSuit == 0)
    {
        cout << "'CLUBS'";
    }
    else if(kiSuit == 1)
    {
        cout << "'DIAMONDS'";
    }
    else if(kiSuit == 2)
    {
        cout << "'HEARTS'";
    }
    else
    {
        cout << "'SPADES'";
    }
}

void printScore(int iaHouseHand[], int kiHouseCardCount, int iaPlayerHand[], int kiPlayerCardCount)
{
    cout << "\n\n\t\tDEALER'S SCORE: ";
    cout << "\nDealer's score: " << ScoreHand(iaHouseHand, kiHouseCardCount);
    printHand(iaHouseHand, kiHouseCardCount);
    cout << "\n\nPlayer's score: " << ScoreHand(iaPlayerHand, kiPlayerCardCount);
    printHand(iaPlayerHand, kiPlayerCardCount);
    cout << endl;
}