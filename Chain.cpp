#include "Chain.h"

template<typename T>
Chain<T>::Chain(istream& in, const CardFactory* set) {
    // TODO: implementation
}
template<typename T>
int Chain<T>::sell() {
    // TODO: implementation
}
template<typename T>
Chain<T>& Chain<T>::operator+=(Card* card) {
    if (typeid(c) != typeid(chain_cards.front())) {
        throw new IllegalType("Not the same type.");
        cout << "Authentic exception." << endl;
    }
    else {
        chain_cards.push_back(card);
    }
}