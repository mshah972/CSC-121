/*

    Moksh Shah            Discussion Question 3
    Week 14               04/25/2021
    CSC 121
    Simple Blackjack Game

*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Jack {
    
    public:
        Jack();
        string deck[52];
        string draw();
        void shuffle();
        void printDeck();
        int size;
        void setRandom();

};

class Player {
    
    public:
        Player();
        string hand[52];
        int handSize;
        int total;
        void addCard(string card);
        void printHand();
        void shuffle_hand();
        void stringCards(string cards);
        int cardValue(string card);
};

class Dealer: public Player {
    
    public:
        Dealer();
        void firstCard();
        void win(Player p);
};