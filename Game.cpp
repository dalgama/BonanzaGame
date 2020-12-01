#include <iostream>
#include <string>
#include "Table.h"



using namespace std;

int main() {
	cout << "Would you like to type the file name to load the game? Or, type 'new' to start a new game." << endl;
	string filename;
	cin >> filename;
	ifstream in;
	if (filename != "new") {
		in.open(filename);
	}

	string n1;
	string n2;
	cout << "What is player one's name?" << std::endl;
	cin >> n1;
	cout << "What is player two's name?" << std::endl;
	cin >> n2;

	Player* p1 = new Player(n1);
	Player* p2 = new Player(n2);

	CardFactory* cardFactory = new CardFactory(in);
	
	p1->

	p2.





	/* 
	Blue *test = new Blue();
	int x = test->getCardsPerCoin(7);
	cout << x << endl;
	return x;
	*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file