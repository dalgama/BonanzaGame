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

/*prints the deck to the output stream*/
void print(std::ostream& out, Deck &d) {
    for (int i = 0; i < (int)d.size(); ++i) {
        d.at(i)->print(out);
    }
}