#include "Hand.h"

/* Constructor which accepts an istream and reconstruct the Hand from file.*/
Hand::Hand(istream& in, const CardFactory* set) {

}

/* Adds the card to the rear of the hand.*/
Hand& Hand::operator+=(Card* c) {
    hand.push_back(c);
    return *this;
}

/* Returns and removes the top card from the player's hand.*/
Card* Hand::play() {
    Card* tmp = nullptr;
    if (!hand.empty()) {
        tmp = hand.front();
        hand.pop_front();
    }
    return tmp;
}

/* Returns but does not remove the top card from the player's hand.*/
Card* Hand::top() {
    return hand.front();
}

/* Returns and removes the Card at a given index.*/
Card* Hand::operator[](int index) {
    // Creates a record of the Card at the given index.
    Card* tmp = hand.front() + index;
    if (!hand.empty() && hand.size() >= unsigned(index)) {
        list<Card*>::iterator it = hand.begin();
        advance(it, index);
        // Erases the Card at the given index.
        hand.erase(it);
    }
    return tmp;
}

/* To insert all the cards in the Hand to an ostream.*/
void print(ostream& out, Hand& h) {
    out << "Current Hand:  ";
    for (auto& card : h.getHand()) {
        card->print(out);
        cout << " ";
    }
    out << "" << endl;
}