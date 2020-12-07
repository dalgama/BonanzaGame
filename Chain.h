#ifndef CHAIN_H
#define CHAIN_H



#include <iostream>
#include <vector>

#include "Card.h"
#include "CardFactory.h"

using namespace std;

/*
* Chain is also a container.
* It will have to grow and shrink as the game progresses.
* Again insertion is only to one end of the chain.
*
* A template class will have to created for Chain being parametric in the type of card. In this project, we will instantiate Chainfor the corresponding bean card.
* Suggestion: we can use a std::vector.
*/

template<class T>
class Chain {
    public:
        /*Constructor*/
        Chain(istream&, const CardFactory*);
        /*Adds cards to the Chain*/
        Chain<T>& operator+=(Card*);
        /*Sells the chain*/
        int sell();
        /*Getter for the chain.*/
        vector<T> getChain() { return chain_cards; }
        /*Destructor*/
        ~Chain() {};
        /* Prints the Card name and the number of the card in the chain with the cards first letter.*/
        friend ostream& operator << (ostream & out, const Chain& chain);  
    private:
        vector<T> chain_cards;
};
#endif