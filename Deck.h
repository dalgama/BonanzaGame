#pragma once
#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <vector>
#include "Card.h"
#include "CardFactory.h"

using namespace std;

/*
* This class willhold all the cards which will have to be shuffled.
* During the game players will draw cards from the deck.
* Cards can not be inserted to the deck.
* Sugestion: Deck can usefully extent a std::vector.
*/

class Deck {
    public:
        Deck(istream&, const CardFactory*);
        Card* draw();
        
    protected:
        const CardFactory* deck;
        istream* in;
};

#endif // DECK_H