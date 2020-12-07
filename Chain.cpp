#include "Chain.h"

/* Exception class*/
class IllegalType : public exception {
public:
    IllegalType() {};
    IllegalType(string illegal_error) : state_error(illegal_error) {};
private:
    string state_error;
}​​;

template<typename T>
Chain<T>::Chain(istream& in, const CardFactory* set) {

}

template<typename T>
Chain<T>::Chain() {
    Card* tmp1 = new Blue();
    chain_cards.push_back(tmp1);
    string tmp = chain_cards[0]->getName();
    cout << tmp << endl;
}

template<typename T>
int Chain<T>::sell() {
    int coinsEarned = getCoinsPerCard(chain_cards.size());
    return coinsEarned;
}

template<typename T>
Chain<T>& Chain<T>::operator+=(Card* card) {
    if (typeid(card) != typeid(chain_cards.front())) {
        throw new IllegalType();
    }
    else {
        chain_cards.push_back(card);
    }
    return *this;
}

template<typename T>
ostream& operator <<(ostream& out, const T& card) {
    if (typeid(card) == typeid(Card)) {
        card.print(out);
    }
    return out;
}