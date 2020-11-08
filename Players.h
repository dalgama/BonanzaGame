#include <iostream>
#include "CardFactory.h"
#include "Chain.h"

using namespace std;

/*
* Table will manage  all the  game  components.
* It will hold two objects of type Player, the Deckand the DiscardPile, as well as the TradeArea.
*/

class Player {
	public:
		Player(string&);
		Player(istream&, const  CardFactory*);
		string getName();
		int getNumCoins();
		Player& operator+=(int);
		int getMaxNumChains();
		int getNumChains();
		Chain& operator[](int i);
		void  buyThirdChain();
	protected:

};

Player::Player(string&) {
	// TODO: implementation
}
Player::Player(istream&, const  CardFactory*) {
	// TODO: implementation
}

string Player::getName() {
	// TODO: implementation
}

int Player::getNumCoins() {
	// TODO: implementation
}

Player& Player::operator+=(int) {
	// TODO: implementation
}

int Player::getMaxNumChains() {
	// TODO: implementation
}

int Player::getNumChains() {
	// TODO: implementation
}

Chain& Player::operator[](int i) {
	// TODO: implementation
}

void  Player::buyThirdChain() {
	// TODO: implementation
}