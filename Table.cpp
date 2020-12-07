#include "Table.h"

Table::Table(istream& in, const CardFactory* set) {
	deck = set->getFactory()->getDeck();
	dPile = new DiscardPile(in, set);
	tArea = new TradeArea(in, set);
}

bool Table::win(string& w) {
	if (w == A->getName() && deck.empty() && A->getNumCoins() > B->getNumCoins()) {
		return true;
	}
	else if (w == B->getName() && deck.empty() && A->getNumCoins() < B->getNumCoins()) {
		return true;
	}
	else {
		return false;
	}
}

void Table::printHand(bool h) {
	if (h) {
		cout << A->getName() << ": ";
		for (Card* card : A->players_hand->players_hand)
			cout << card->getName() << " ";
		cout << endl;

		cout << B->getName() << ": "; 
		for (Card* card : B->players_hand->players_hand)
			cout << card->getName() << " ";
		cout << endl;
	}
	else {
		cout << A->getName() << ": " << A->players_hand->top()->getName() << endl;
		cout << B->getName() << ": " << B->players_hand->top()->getName() << endl;
	}
}