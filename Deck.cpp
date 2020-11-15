#include "Deck.h"

Deck::Deck(istream& inS, const CardFactory* shuffled_deck) {
    in = &inS;
    deck = shuffled_deck;
}

Card* Deck::draw() {
    Card* topCard = deck->removeTopCard();
    return topCard;
}