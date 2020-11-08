#include <iostream>
//#include "Deck.h"

using namespace std;

/*
* The card factory serves as a factory for all the beancards.
* CardFactory will generate all cards, and so, we will explore the factory pattern.
* A factory ensures that there is only a single unit in the program that is responsible to create and delete cards. Other parts of the program will only use pointers to access the cards. 
* Note that means, we will delete the copy constructor and assignment operator in Card.
*/

class CardFactory {
	public:
		CardFactory();
		/*static  CardFactory* getFactory();
		Deck getDeck();*/
	protected:
};

CardFactory::CardFactory() {
	// TODO: implementation
}

//static CardFactory* CardFactory::getFactory() {
//	// TODO: implementation
//}

//Deck CardFactory::getDeck() {
//	// TODO: implementation
//}
