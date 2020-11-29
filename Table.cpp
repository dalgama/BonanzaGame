#include "Table.h"

Table::Table(istream& in, const CardFactory* set) {
	A = new Player(in, set);
	B = new Player(in, set);
	deck = new Deck(in, set);
	dPile = new DiscardPile(in, set);
	tArea = new TradeArea(in, set);
}

bool Table::win(string& w) {
	if (w == A->getName() && deck->getDeck().empty() && A->getNumCoins() > B->getNumCoins()) {
		return true;
	}
	else if (w == B->getName() && deck->getDeck().empty() && A->getNumCoins() < B->getNumCoins()) {
		return true;
	}
	else {
		return false;
	}
}

void Table::printHand(ostream& out, bool h) {
	A->printHand(out, h);
	B->printHand(out, h);
}