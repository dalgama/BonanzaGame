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
		/*Constructor*/
		Table(istream& in, const CardFactory* set);
		/*Returns true when a player has won*/
		bool win(string& w);
		/*Prints the top card*/
		void printHand(bool);
		/*Destructor*/
		~Table();
		/*Prints player, dicard pile and trade area.*/
		friend void print(std::ostream&, Table&);
		

		Player *A;
		Player *B;
		Deck deck;
		DiscardPile *dPile;
		TradeArea* tArea;
		
};