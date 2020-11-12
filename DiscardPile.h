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
        DiscardPile(istream&, const CardFactory*);
        DiscardPile& operator+=(Card*);
        Card* pickUp();
        Card* top();
    protected:

};

DiscardPile::DiscardPile(istream& in, const CardFactory* set) {
    // TODO: implementation
}

DiscardPile& DiscardPile::operator+=(Card*) {
    // TODO: implementation
}

Card* DiscardPile::pickUp() {
    // TODO: implementation
}

Card* DiscardPile::top() {
    // TODO: implementation
}