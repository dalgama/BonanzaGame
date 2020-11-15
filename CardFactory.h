#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <fstream> 
#include "Deck.h"
#include "Card.h"
#define SAVE_FILE "Beangame.txt"

using namespace std;

/*
* The card factory serves as a factory for all the beancards.
* CardFactory will generate all cards, and so, we will explore the factory pattern.
* A factory ensures that there is only a single unit in the program that is responsible to create and delete cards. Other parts of the program will only use pointers to access the cards. 
* Note that means, we will delete the copy constructor and assignment operator in Card.
*/

class CardFactory {
	public:
		CardFactory(istream&);
		/* Returns a pointer to the only instance of CardFactory*/
		static CardFactory* getFactory();
		/* Returns a deck with all 104 bean cards.*/
		Deck getDeck();
	
		/* Vector that will be populated with all the 105 cards. */
		vector<Card*> cards;
		/*The current variable is static because this causes this class to only have one CardFactory object.*/
		static CardFactory *current;
		istream *in;

};
