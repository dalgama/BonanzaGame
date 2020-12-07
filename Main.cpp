#include <iostream>
#include <fstream>
#include <string>
#include "Card.h"
#include "Table.h"


using namespace std;

ifstream iF;

int main() {
	cout << "Would you like to type the file name to load the game? Or, type 'new' to start a new game." << endl;
	string filename;
	cin >> filename;

	if (filename != "new") {
		iF.open(filename);
	}
	else {
		ofstream in("GameData.txt", fstream::out);
		iF.open("GameData.txt");
	}

	string n1;
	string n2;
	cout << "What is player one's name?" << std::endl;
	cin >> n1;
	cout << "What is player two's name?" << std::endl;
	cin >> n2;

	CardFactory* factory;
	Table* table = new Table(iF, factory->getFactory());
	table->A = new Player(n1);
	table->B = new Player(n2);

	/*  Number of Cards Whole Deck
	int ctr0 = 0;
	for (Card* card : table->deck)
		ctr0++;
	cout << ctr0 << endl;
	*/

	for (int i = 0; i < 5; i++)
		table->A->players_hand->operator+=(table->deck.draw());
	for (int i = 0; i < 5; i++)
		table->B->players_hand->operator+=(table->deck.draw());

	// table->A.currChains.operator[](0);


	Player* pArray[]{table->A, table->B};

	/* After Draw 5 Cards For Each Player
	int ctr = 0;
	for (Card* card : table->deck)
		ctr++;
	cout << ctr << endl;
	*/

	while (!table->deck.empty()) {
		if (false) {
			break;
		}
		for (Player* p : pArray) {
			table->printHand(true);
			table->printHand(false); // Top cards;

			 Card* blue = table->deck.draw();

			for (Chain<Card*> chain : p->currChains) {
				cout << "Hello World!" << endl;
				int num = 1;
				cout << p->getName() << num << " Chain: ";
				
				for (int i = 0; i < chain.chain_cards.size(); i++) {
					cout << ((Card*)(chain.chain_cards.at(i)))->getName() << " ";
				}
				cout << endl;
				num++;
			}
		
			cout << "TradeArea: ";
			for (Card* card : table->tArea->trade_area)
				cout << card->getName() << " ";
			cout << endl;

			p->players_hand->operator+=(table->deck.draw());

			if (!table->tArea->trade_area.empty()) {
				cout << "From TradeArea to Chain[c]? Or, discard them[d]? The default is to discard" << endl;
				string ans;
				cin >> ans;
				if (ans == "c") {
					for (Card* card : table->tArea->trade_area) {
						for (Chain<Card*> chain : p->currChains) {
							if (((Card*)(chain.chain_cards.at(0)))->getName() == card->getName()) {
								chain.chain_cards.push_back(&card);
							}
						}
					}
				}
				else {
					for (Card* card : table->tArea->trade_area) {
						table->dPile->operator+=(table->tArea->trade(card->getName()));
					}
				}
			}
			for (Chain<Card*> chain : p->currChains) {
				if (((Card*)(chain.chain_cards.at(0)))->getName() == p->players_hand->top()->getName()
					|| ((Card*)(chain.chain_cards.empty()))) {
					chain.chain_cards.push_back((Card**)(p->players_hand->play()));
				}
			}
		}
		break;
	}

	/*
	for (Card* card : table->A->players_hand->players_hand)
		cout << card->getName() << endl;

	for (Card* card : table->B->players_hand->players_hand)
		cout << card->getName() << endl;
	*/

	// cout << table->deck.draw()->getName() << endl;
}