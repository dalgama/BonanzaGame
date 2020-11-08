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


class Chain {
    public:
        Chain(istream&, const CardFactory*);
        //template<typename T = Card*>
        //Chain<T>& operator+=(Card*);
        int sell();
    protected:

};

Chain::Chain(istream& in, const CardFactory* set) {
    // TODO: implementation
}

int Chain::sell() {
    // TODO: implementation
}

//Chain<T>& Chain::operator+=(Card*){
//    // TODO: insert return statement here
//}
