// CS201RWk3Blackjack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


struct card {
    char suit;
    int face;
};

int main()
{
    vector<card> theDeck;
    char suits[4] = { 'D', 'C', 'S', '\x03' };
    card tempCard;
    for (int s = 0; s < 4; s++) {
        tempCard.suit = suits[s];
        for (int f = 0; f < 13; f++) {
            tempCard.face = f;
            theDeck.push_back(tempCard);

        }
    }
    for (int s = 0; s < theDeck.size(); s++) {
            cout << theDeck[s].suit << " " << theDeck[s].face << endl;

        
    }
}   
