#include "Chain.h"

/* Exception class*/
class IllegalType : public exception {
public:
    IllegalType() {};
    IllegalType(string illegal_error) : state_error(illegal_error) {};
private:
    string state_error;
}​​;

/*Constructor*/
template<typename T>
Chain<T>::Chain(istream& in, const CardFactory* set) {

}

/*Adds cards to the Chain*/
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

/*Sells the chain*/
template<typename T>
int Chain<T>::sell() {
    int coinsEarned = getCoinsPerCard(chain_cards.size());
    return coinsEarned;
}

/* Prints the Card name and the number of the card in the chain with the cards first letter.*/
template<typename T>
ostream& operator <<(ostream& out, Chain<Card>& chain) {
    //Chain card Name e.g Red
    out << chain.chain_cards[0].getName()
        << "\t";
    //Prints the card based on how many there is in the chain e.g R R R R.
    for (int x = 0; x < int(chain.chain_cards.size());x++) {
        chain.chain_cards[0]->print(out);
        out << " ";
    }
    out << "\n";
    return out;
}

