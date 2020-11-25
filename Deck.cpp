#include "Deck.h"

/* Constructor which accepts an istream and reconstruct the Deck from file.*/
Deck::Deck(istream& inS, const CardFactory* shuffled_deck) {

}

/* Returns and removes the top card from the deck */
Card* Deck::draw() {
    Card* tmp = nullptr;
   if (!this->empty()) {
        tmp = this->front();
        this->erase(this->begin());
   }
    return tmp;
}

/* Returns the deck */
Deck Deck::getDeck() {
    return *this;
}