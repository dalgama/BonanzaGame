#pragma once
#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <vector>

#include "Card.h"

using namespace std;

/*
* This class willhold all the cards which will have to be shuffled.
* During the game players will draw cards from the deck.
* Cards can not be inserted to the deck.
* Sugestion: Deck can usefully extent a std::vector.
*/
class CardFactory;
class Deck : public vector<Card*> {
    public:
        /* Constructor which accepts an istream and reconstruct the Deck from file.*/
        Deck(istream&, const CardFactory*);
        Deck() {};
        /* Returns and removes the top card from the deck */
        Card* draw();
        /* Returns the deck */
        Deck getDeck();
        /*Destructor*/
        ~Deck() {};
        //prints the deck to the output stream
        friend void print(std::ostream&, Deck&);
};

#endif // DECK_H