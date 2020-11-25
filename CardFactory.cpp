#include "CardFactory.h"

/*
* This constructor creates all the 104 bean cards in the game and stories it in a vector and shuffles the cards in the vector.
*/
CardFactory::CardFactory(istream& inS) {
	if (currentDeck == nullptr) {
		currentDeck = new Deck(inS, this);
	}

	for (int i = 0; i < 104; i++) {
		//Inserting Blue cards to the deck.
		if (i < 20) {
			currentDeck->push_back(new Blue());
		}
		//Inserting Chili cards to the deck.
		else if (i > 19 && i < 38) {
			currentDeck->push_back(new Chili());
		}
		//Inserting Stink cards to the deck.
		else if (i > 37 && i < 54) {
			currentDeck->push_back(new Stink());
		}
		//Inserting Green cards to the deck.
		else if (i > 53 && i < 68) {
			currentDeck->push_back(new Green());
		}
		//Inserting soy cards to the deck.
		else if (i > 67 && i < 80) {
			currentDeck->push_back(new soy());
		}
		//Inserting black cards to the deck.
		else if (i > 79 && i < 90) {
			currentDeck->push_back(new black());
		}
		//Inserting Red cards to the deck.
		else if (i > 89 && i < 98) {
			currentDeck->push_back(new Red());
		}
		//Inserting garden cards to the deck.
		else {
			currentDeck->push_back(new garden());
		}
	}
	//Shuffles the card variable current.card.
	random_shuffle(currentDeck->begin(), currentDeck->end());
}

/*
* This function returns the only CardFactory pointer the is created.
*/
CardFactory* CardFactory::getFactory(istream &input) {
	static CardFactory* current = new CardFactory(input);
	return current;
}

/*
* This function shuffles the cards created from the Construction of this class and it created a Deck class instance with this shuffled cards(104 cards).
*/
Deck CardFactory::getDeck() {
	//Creates an Deck object with the CardFactory pointer than holds the shuffled deck(current).
	return *currentDeck;
}