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
        Hand(istream&, const CardFactory*);
        Hand& operator+=(Card*);
        Card* play();
        Card* top();
        Card* operator[](int);
    protected:

};

Hand::Hand(istream& in, const CardFactory*) {
    // TODO: implementation
}

Hand& Hand::operator+=(Card*) {
    // TODO: implementation
}

Card* Hand::play() {
    // TODO: implementation
}

Card* Hand::top() {
    // TODO: implementation
}

Card* Hand::operator[](int) {
    // TODO: implementation
}