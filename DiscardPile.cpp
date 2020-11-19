#include "DiscardPile.h"

/* Constructor which accepts an istream and reconstruct the Discarpile from file.*/
DiscardPile::DiscardPile(istream& in, const CardFactory* set) {
    // TODO: implementation
}

/* Discards the card to the pile */
DiscardPile& DiscardPile::operator+=(Card* c) {
    discard_pile.push_back(c);
    return *this;
}

/* Returns and removes the top card from the discard pile. */
Card* DiscardPile::pickUp() {
    Card* tmp = nullptr;
    if (!discard_pile.empty()) {
        tmp = discard_pile.front();
        discard_pile.erase(discard_pile.begin());
    }
    return tmp;
}

/* Returns but does not remove the top card from the discard pile.*/
Card* DiscardPile::top() {
    return discard_pile.front();
}

/* To insert all the cards in the DiscardPile to an ostream.*/
void DiscardPile::print(ostream& out) {
    out << "Discard Pile [ ";
    for (auto& card : discard_pile) {
        card->print(out);
        cout << " ";
    }
    out << "]" << endl;
}