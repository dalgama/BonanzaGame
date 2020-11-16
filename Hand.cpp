#include "Hand.h"

/* Constructor which accepts an istream and reconstruct the Hand from file.*/
Hand::Hand(istream& in, const CardFactory* set) {
    // TODO: implementation
}

/* Adds the card to the rear of the hand.*/
Hand& Hand::operator+=(Card* c) {
    players_hand.push_back(c);
    return *this;
}

/* Returns and removes the top card from the player's hand.*/
Card* Hand::play() {
    Card* tmp = nullptr;
    if (!players_hand.empty()) {
        tmp = players_hand.front();
        players_hand.pop_front();
    }
    return tmp;
}

/* Returns but does not remove the top card from the player's hand.*/
Card* Hand::top() {
    return players_hand.front();
}

/* Returns and removes the Card at a given index.*/
Card* Hand::operator[](int index) {
    // Creates a record of the Card at the given index.
    Card* tmp = players_hand.front() + index;
    if (!players_hand.empty() && players_hand.size() >= index) {
        list<Card*>::iterator it = players_hand.begin();
        advance(it, index);
        // Erases the Card at the given index.
        players_hand.erase(it);
    }
    return tmp;
}

/* To insert all the cards in the Hand to an ostream.*/
void Hand::print(ostream& out) {
    out << "Hands [ ";
    for (auto& card : players_hand) {
        card->print(out);
        cout << " ";
    }
    out << "]" << endl;
}