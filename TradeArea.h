#include <iostream>
#include <list>
#include "Card.h"
#include "CardFactory.h"

using namespace std;
typedef list<Card*> CardList;

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
	private:
		/*Stores all the card in the TradeArea.*/
		CardList trade_area;
};
