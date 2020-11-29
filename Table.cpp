#include "Table.h"

/*
Table::Table(std::istream& file) {
	d_deck = CardFactory::getFactory(file)->getDeck();
	d_discardPile = new DiscardPile(file, CardFactory::getFactory(file));
	d_tradeArea = new TradeArea(file, CardFactory::getFactory(file));
	d_players.push_back(new Player(file, getName(1)));
	d_players.push_back(new Player(file, getName(2)));
	for (auto const& player : d_players) {
		for (int i = 0; i < 5; i++) {
			*player->getHand() += d_deck->draw();
		}
	}
	Player A;
	Player B;
	Deck deck;
	DiscardPile dPile;
	TradeArea tArea;
}
*/


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