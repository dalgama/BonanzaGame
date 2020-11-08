#include <iostream>
#include "Card.h"
#include "CardFactory.h"

using namespace std;

/*
* TradeArea class will have to hold cards openly and support random access insertion and removal.
*/

class TradeArea {
	public:
		TradeArea(istream&, const  CardFactory*);
		TradeArea& operator+=(Card*);
		bool legal(Card*);
		Card* trade(string);
		int numCards();
};

TradeArea::TradeArea(istream& in, const CardFactory* set) {
	// TODO: implementation
}

TradeArea& TradeArea::operator+=(Card*) {
	// TODO: implementation
}

bool TradeArea::legal(Card*) {
	// TODO: implementation
}

Card* TradeArea::trade(string) {
	// TODO: implementation
}

int TradeArea::numCards() {
	// TODO: implementation
}