#include <iostream>
#include <vector>
#include "Card.h"
#include "CardFactory.h"

using namespace std;

/*
* Must support insertion and removal but not at random locations but all at the end.
* Suggestion: std::vection might come in useful.
*/

class DiscardPile {
    public:
        /* Constructor which accepts an istream and reconstruct the Discard pile from file.*/
        DiscardPile(istream&, const CardFactory*);
        /* Discards the card to the pile */
        DiscardPile& operator+=(Card*);
        /* Returns and removes the top card from the discard pile. */
        Card* pickUp();
        /* Returns but does not remove the top card from the discard pile.*/
        Card* top();
        /* To insert all the cards in the DiscardPile to an ostream.*/
        void print(ostream&);
    private:
        /*Stores all the card in the Discard pile.*/
        vector<Card*> discard_pile;
};