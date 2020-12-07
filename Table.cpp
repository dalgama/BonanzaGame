#include "Table.h"

/*Constructor*/
Table::Table(istream& in, const CardFactory *set) {
	deck = set->getFactory(in)->getDeck();
	dPile = new DiscardPile(in, set);
	tArea = new TradeArea(in, set);
}

/*Returns true when a player has won*/
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

/*Prints the top card*/
void Table::printHand(bool h) {
	if (h) {
		cout << A->getName() << ": ";
		for (Card* card : A->getPlayersHand()->getHand())
			cout << card->getName() << " ";
		cout << endl;

		cout << B->getName() << ": "; 
		for (Card* card : B->getPlayersHand()->getHand())
			cout << card->getName() << " ";
		cout << endl;
	}
	else {
		cout << A->getName() << ": " << A->getPlayersHand()->top()->getName() << endl;
		cout << B->getName() << ": " << B->getPlayersHand()->top()->getName() << endl;
	}
}
/*Destructor*/
Table::~Table() {
	delete A;
	delete B;
	delete dPile;
	delete tArea;
}

void print(std::ostream& out, Table& t) {
	//Player 1
	out << "Player 1: " << t.A->getName();
	out << "\n";
	t.A->printHand(out,true);
	out << "\n";
	//Player 2
	out << "Player 2: " << t.B->getName();
	out << "\n";
	t.B->printHand(out, true);
	//Discard pile
	out << "\n";
	t.dPile->print(out);
	//Print Trade Area
	out << "\n";
	print(out, *t.tArea);
}