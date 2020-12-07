#include <iostream>
#include <fstream>
#include <string>
#include "Card.h"
#include "Table.h"


using namespace std;

/*NOTE: My partner I am couldn't finish the Main because we ran in to an issue calling and adding to the chain therefore we could continue the steps after
*		since it requires information from the steps above but we provided the skeleton of what the main should look like providing as much information as possible. 
*       Other than this all the functions for all the classes are implemented as mentioned in the project instructions.
* 
*      Group Members: Dilanga Algama (8253677).
*                     Xiaoxi Jia (300000227).
*/

int main() {
	cout << "Would you like to type the file name to load the game? Or, type 'new' to start a new game." << endl;
	string filename;
	cin >> filename;
	cout << "--------------------------------------" << endl;
	ifstream file(filename);

	ifstream iF;
	if (filename != "new") {
		iF.open(filename);
	}
	else {
		ofstream in("GameData.txt", fstream::out);
		iF.open("GameData.txt");
	}

	string n1;
	cout << "Player 1: What is your name?" << std::endl;
	cin >> n1;
	cout << "--------------------------------------" << endl;

	string n2;
	cout << "Player 2: What is your name?" << std::endl;
	cin >> n2;
	cout << "--------------------------------------" << endl;

	CardFactory *factory = factory->getFactory(file);
	Table* table = new Table(iF, factory);
	table->A = new Player(n1);
	table->B = new Player(n2);

	//Number of Cards in the Whole Deck
	int ctr0 = 0;
	for (Card* card : table->deck)
		ctr0++;
	cout << "Number of cards in the whole shuffled deck: " << ctr0 << endl;
	cout << "--------------------------------------" << endl;

	// Drawing 5 cards for Player 1.
	for (int i = 0; i < 5; i++)
		table->A->getPlayersHand()->operator+=(table->deck.draw());

	// Drawing 5 cards for Player 2.
	for (int i = 0; i < 5; i++)
		table->B->getPlayersHand()->operator+=(table->deck.draw());

	//Printing table
	print(cout, *table);

	Player* pArray[]{table->A, table->B};

	while (!table->deck.empty()) {
		if (false) {
			break;
		}
		for (Player* p : pArray){

			cout << "--------------------------------------" << endl;
			cout << "Top card of both Players hand:" << endl;
			table->printHand(false); // Top cards;

			for (Chain<Card*> chain : p->getChain()) {
				int num = 1;
				cout << p->getName() << num << " Chain [ ";

				for (int i = 0; i < int(chain.getChain().size()); ++i)
					cout << chain.getChain()[i]->getName() << ' ';
				cout << "]" <<endl;
				num++;
			}

			if (!table->tArea->getTradeArea().empty()) {
				cout << "From TradeArea to Chain[c]? Or, discard them[d]? The default is to discard" << endl;
				string ans;
				cin >> ans;
				if (ans == "c") {
					for (Card* card : table->tArea->getTradeArea()) {
						for (Chain<Card*> chain : p->getChain()) {
							if (chain.getChain()[0]->getName() == card->getName()) {
								chain.getChain().push_back(card);
							}
						}
					}
				}
				else {
					for (Card* card : table->tArea->getTradeArea()) {
						table->dPile->operator+=(table->tArea->trade(card->getName()));
					}
				}
			}
			for (Chain<Card*> chain : p->getChain()) {
				if (chain.getChain()[0]->getName() == p->getPlayersHand()->top()->getName()
					|| ((Card*)(chain.getChain().empty()))) {
					chain.getChain().push_back((Card*)(p->getPlayersHand()->play()));
				}
			}
		}
		break;
	}
}