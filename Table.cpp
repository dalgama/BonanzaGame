#include "Table.h"

Table::Table(istream& in, const CardFactory* set) {

}

bool Table::win(string& w) {
	if (w == A.getName() && deck.getDeck().empty() && A.getNumCoins() > B.getNumCoins()) {
		return true;
	}
	else if (w == B.getName() && deck.getDeck().empty() && A.getNumCoins() < B.getNumCoins()) {
		return true;
	}
	else {
		return false;
	}
}

void Table::printHand(bool h) {
	A.printHand(out, h);
}