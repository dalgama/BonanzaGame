#include <iostream>
#include "CardFactory.h"
#include "Player.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "TradeArea.h"

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
	private:
		Player A;
		Player B;
		Deck deck;
		DiscardPile dPile;
		TradeArea tArea;
		ostream& out;
};