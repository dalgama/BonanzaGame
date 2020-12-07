#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
using namespace std;

/*
* Card will be an abstract base class and the eight different beancards will be derived from it(inheritance).
* All containers will hold cards through the base type. However, standard containers do not work well with polymorphic types because they hold copies(slicing will occur).
*/

class Card {
	public:
		/* Returns how many cards are necessary to recieve the corresponding number of coins.*/
		virtual int getCardsPerCoin(int) = 0;
		/* Returns the number of coins earned based on the number of cards.*/
		virtual int getCoinsPerCard(int) = 0;
		/* Returns the full name of the card (e.g. Blue)*/
		virtual string getName() = 0;
		/* To inserts the first chacacter of the card to an ostream.*/
		virtual void print(ostream& out) = 0;
		/* Destroyer */
		virtual ~Card() {};
	protected:
		string name;
		int score[5] = {};
};

class Blue : public Card {
	public:
		int getCardsPerCoin(int);
		int getCoinsPerCard(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Blue";
		int score[5] = { 20,4,6,8,10 };
};

class Chili : public Card {
	public:
		int getCardsPerCoin(int);
		int getCoinsPerCard(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Chili";
		int score[5] = { 18,3,6,8,9 };
};

class Stink : public Card {
	public:
		int getCardsPerCoin(int);
		int getCoinsPerCard(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Stink";
		int score[5] = { 16,3,5,7,8 };	
};

class Green : public Card {
	public:
		int getCardsPerCoin(int);
		int getCoinsPerCard(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Green";
		int score[5] = { 14,3,5,6,7 };
};

class soy : public Card {
	public:
		int getCardsPerCoin(int);
		int getCoinsPerCard(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Soy";
		int score[5] = { 12,2,4,6,7 };
};

class black : public Card {
	public:
		int getCardsPerCoin(int);
		int getCoinsPerCard(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Black";
		int score[5] = { 10,2,4,5,6 };
};

class Red : public Card {
	public:
		int getCardsPerCoin(int);
		int getCoinsPerCard(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Red";
		int score[5] = { 8,2,3,4,5 };
};

class garden : public Card {
	public:
		int getCardsPerCoin(int);
		int getCoinsPerCard(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Garden";
		int score[5] = { 6,0,2,3,0 };
};

#endif