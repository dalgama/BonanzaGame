#include "TradeArea.h" 

/*Constructor*/
TradeArea::TradeArea(istream& in, const CardFactory* set) {

}

/*Adds a card to the TradeArea*/
TradeArea& TradeArea::operator+=(Card* card) {
	trade_area.push_back(card);
	return *this;
}

/*Returns true if the card can be leaglly added to the Trade Area*/
bool TradeArea::legal(Card* card) {
	for (Card* c : trade_area) {
		if (card->getName() == c->getName()) {
			return true;
		}
	}
	return false;
}

/*Removes a card of the corresonding bean name from the trade Area*/
Card* TradeArea::trade(string name) {
	Card* tmp = nullptr;
	for (CardList::iterator iter = trade_area.begin(); iter != trade_area.end(); ++iter) {
		if ((*iter)->getName() == name) {
			tmp = (*iter);
			trade_area.erase(iter);
		}
	}
	return tmp;
}

/*Number of cards currently in the trade Area.*/
int TradeArea::numCards() {
	return trade_area.size();
}

/*To insert all cards in the TradeArea to an ostream.*/
void print(ostream& out, TradeArea& td) {
	cout << "Trade Area [ ";
	for (auto v : td.trade_area) {
		v->print(out);
	}
	cout << " ]" << endl;
}