#include "Deck.h"

/* Constructor which accepts an istream and reconstruct the Deck from file.*/
Deck::Deck(istream& inS, const CardFactory* shuffled_deck) {
    in = &inS;
    deck = shuffled_deck->current->cards;
}

/* Returns and removes the top card from the deck */
Card* Deck::draw() {
    Card* tmp = nullptr;
   if (!deck.empty()) {
        tmp = deck.front();
        deck.erase(deck.begin());
   }
    return tmp;
}