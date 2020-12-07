#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

#include "CardFactory.h"
#include "Chain.h"
#include "Hand.h"

using namespace std;

/*
* Table will manage  all the  game  components.
* It will hold two objects of type Player, the Deckand the DiscardPile, as well as the TradeArea.
*/

/* Exception class*/
class NotEnoughCoins {
	private:
		string state_error_NEC;
	public:
		NotEnoughCoins(string error_NEC) : state_error_NEC(error_NEC) {};
};

class Player {
	public:
		/* Constructor that creates a Player with a given name. */
		Player(string&);
		/* Constructor which accepts an istream and reconstruct the Player from file. */
		Player(istream&, const  CardFactory*);
		/*Get the name of the player.*/
		std::string getName();
		/*Get the number of coins currently held by the player. */
		int getNumCoins();
		/*Add a number of coins */
		Player& operator+=(int);
		/*Returns either 2 or 3*/
		int getMaxNumChains();
		/*Returns the number of non-zero chains. */
		int getNumChains();
		/*Returns the chain at position i.*/
		Chain<Card*>& operator[](int i);
		/*Adds a empty third chain to the player for three coins. The function reduces the coin count for the player by two.
          If the player does not have enough coins then an exception NotEnoughCoins is thrown.*/
		void buyThirdChain();
		/*Prints the top card of the player's hand (with arguement false) or all player's hand (with argument true) to the supplied ostream.*/
		void printHand(ostream& out, bool b);
		/*Returns players hand.*/
		Hand* getPlayersHand() { return players_hand; }
		/*Returns players chain*/
		vector<Chain<Card*>> getChain() { return currChains; }
		/*destructor*/
		~Player();
		/* Prints players name, number of coins and number or cards in each chain with it's first letter.*/
		friend ostream& operator<<(ostream& out,const Player& player);
		

	private:
		vector<Chain<Card*>> currChains;
		Hand* players_hand;
		std::string players_name;
		int numCoins = 0;
		int numChains = 2;
};

#endif
