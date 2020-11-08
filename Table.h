#include <iostream>
#include "CardFactory.h"

using namespace std;

/*
* Table will manage  all the  game  components.
* It will hold two objects of type Player, the Deckand the DiscardPile, as well as the TradeArea.
*/

class Table {
	public:
		Table(istream&, const CardFactory*);
		bool win(string&);
		void printHand(bool);
	protected:
};

Table::Table(istream& in, const CardFactory* set) {
	// TODO: implementation
}

bool Table::win(string& w) {
	// TODO: implementation
}

void Table::printHand(bool h) {
	// TODO: implementation
}