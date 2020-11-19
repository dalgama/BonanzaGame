#include <iostream>
#include <list> 
#include <iterator>
#include "Card.h"
#include "CardFactory.h"

using namespace std;

/*
* Hand is well mapped by a queue since players have to keep their hand inorder and the first card drawn is the first card played.
* The only derivation form this pattern is if players discard a card from the middle in Step 4 of a player's turn.
* Suggestion: we can use a std::listto remove at an arbitrary location efficiently with a std::queueadapter.
*/

class Hand {
    public:
        /* Constructor which accepts an istream and reconstruct the Hand from file.*/
        Hand(istream&, const CardFactory*);
        /* Adds the card to the rear of the hand.*/
        Hand& operator+=(Card*);
        /* Returns and removes the top card from the player's hand.*/
        Card* play();
        /* Returns but does not remove the top card from the player's hand.*/
        Card* top();
        /* Returns and removes the Card at a given index.*/
        Card* operator[](int);
        /* To insert all the cards in the Hand to an ostream.*/
        void print(ostream&);
    protected:
        /*Stores all the card in the players hand.*/
        list<Card*> players_hand;
};