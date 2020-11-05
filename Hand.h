#include <iostream>

using namespace std;

/*
* Hand is well mapped by a queue since players have to keep their hand inorder and the first card drawn is the first card played.
* The only derivation form this pattern is if players discard a card from the middle in Step 4 of a player's turn.
* Suggestion: we can use a std::listto remove at an arbitrary location efficiently with a std::queueadapter.
*/

class Hand {
public:
    Hand();

private:

};
