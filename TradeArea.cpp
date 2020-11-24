#include "TradeArea.h" 

TradeArea::TradeArea(istream& in, const CardFactory* set) {

}

TradeArea& TradeArea::operator+=(Card* card) {
	trade_area.push_back(card);
	return *this;
}

bool TradeArea::legal(Card* card) {
	for (Card* c : trade_area) {
		if (card->getName() == c->getName()) {
			return true;
		}
	}
	return false;
}

Card* TradeArea::trade(string name) {
	for (Card* card : trade_area) {
		if (card->getName() == name) {
			trade_area.remove(card);
		}
	}
}

int TradeArea::numCards() {
	return trade_area.size();
}