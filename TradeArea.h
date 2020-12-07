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
		/*Constructor*/
		TradeArea(istream&, const  CardFactory*);
		/*Adds a card to the TradeArea*/
		TradeArea& operator+=(Card*);
		/*Returns true if the card can be leaglly added to the Trade Area*/
		bool legal(Card*);
		/*Removes a card of the corresonding bean name from the trade Area*/
		Card* trade(string);
		/*Number of cards currently in the trade Area.*/
		int numCards();
		/*Returns all the cards in the TradeArea*/
		CardList getTradeArea() { return trade_area; };
		/*Destructor*/
		~TradeArea() {};
		/*To insert all cards in the TradeArea to an ostream.*/
		friend void print(ostream&, TradeArea&);
	private:
		/*Stores all the card in the TradeArea.*/
		CardList trade_area;
};
