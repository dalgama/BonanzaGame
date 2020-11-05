#include <iostream>

using namespace std;

/*
* Card will be an abstract base class and the eight different beancards will be derived from it(inheritance).
* All containers will hold cards through the base type. However, standard containers do not work well with polymorphic types because they hold copies(slicing will occur).
*/

class Card {
	Card();
};
