#include "Chain.h"

template<typename T>
Chain<T>::Chain(istream& in, const CardFactory* set) {

}

template<typename T>
int Chain<T>::sell() {
    return getCoinsPerCard(chain_cards.size());
}

template<typename T>
Chain<T>& Chain<T>::operator+=(Card* card) {
    if (typeid(c) != typeid(chain_cards.front())) {
        throw new IllegalType("Not the same type.");
    }
    else {
        chain_cards.push_back(card);
        return *this;
    }
}

template<typename T>
ostream& operator <<(ostream& out, const T& card) {
    if (typeid(card) == typeid(Card)) {
        ((Card)card).print(out);
    }
    return out;
}
