#include <iostream>

using namespace std;

/*
* CardFactory will generate all cards, and so, we will explore the factory pattern.
* A factory ensures that there is only a single unit in the program that is responsible to create and delete cards. Other parts of the program will only use pointers to access the cards. 
* Note that means, we will delete the copy constructor and assignment operator in Card.
*/

class CardFactory {
	CardFactory();
};
