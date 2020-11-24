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
		string state_error;
	public:
		NotEnoughCoins(string error) : state_error(error) {};
};

class Player {
	public:
		/* Constructor that creates a Player with a given name. */
		Player(string&);
		/* Constructor which accepts an istream and reconstruct the Player from file. */
		Player(istream&, const  CardFactory*);
		/* Get the name of the player.*/
		string getName();
		/* Get the number of coins currently held by the player. */
		int getNumCoins();
		/* Add a number of coins */
		Player& operator+=(int);
		/* Returns either 2 or 3*/
		int getMaxNumChains();
		/* Returns the number of non-zero chains. */
		int getNumChains();
		/* Returns the number of non-zero chains.*/
		Chain& operator[](int i);
		/* Adds a empty third chain to the player for three coins. The function reduces the coin count for the player by two.
           If the player does not have enough coins then an exception NotEnoughCoins is thrown.*/
		void buyThirdChain();
		/* Prints the top card of the player's hand (with arguement false) or all player's hand (with argument true) to the supplied ostream.*/
		void printHand(ostream& out, bool b);
		/* Called when you can to sell a chain.*/
		void sellChain(Chain*);
	private:
		string players_name;
		Hand* players_hand;
		int numCoins = 0;
		int numChains = 0;
		vector<Chain<Card*>> currChains;

};
