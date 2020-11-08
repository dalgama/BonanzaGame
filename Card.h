#include <iostream>
using namespace std;

/*
* Card will be an abstract base class and the eight different beancards will be derived from it(inheritance).
* All containers will hold cards through the base type. However, standard containers do not work well with polymorphic types because they hold copies(slicing will occur).
*/

class Card {
	public:
		virtual string getName();
		virtual void print(ostream& out);
	protected:
		string name;
};

class Blue : public Card {
	public:
		int getCardsPerCoin(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Blue";
		int score[5] = { 20,4,6,8,10 };
};

class Chili : public Card {
	public:
		int getCardsPerCoin(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Chili";
		int score[5] = { 18,3,6,8,9 };
};

class Stink : public Card {
	public:
		int getCardsPerCoin(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Stink";
		int score[5] = { 16,3,5,7,8 };	
};

class Green : public Card {
	public:
		int getCardsPerCoin(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Green";
		int score[5] = { 14,3,5,6,7 };
};

class soy : public Card {
	public:
		int getCardsPerCoin(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Soy";
		int score[5] = { 12,2,4,6,7 };
};

class black : public Card {
	public:
		int getCardsPerCoin(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Black";
		int score[5] = { 10,2,4,5,6 };
};

class Red : public Card {
	public:
		int getCardsPerCoin(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Red";
		int score[5] = { 8,2,3,4,5 };
};

class garden : public Card {
	public:
		int getCardsPerCoin(int);
		string getName() { return name; };
		void print(ostream& out);
	protected:
		string name = "Garden";
		int score[5] = { 6,0,2,3,0 };
};


// Blue class functions
int Blue::getCardsPerCoin(int coins) {
	int numofCard = 0;

	if (coins == 0) {
		return numofCard;
	}
	else if (coins >= 1 && coins <= 4) {
		numofCard = score[coins];
		return numofCard;
	}
	else {
		while (coins >= 0) {
			if (coins == 0) {
				return numofCard;
			}
			else if (coins >= 4 && score[4] != 0) {
				coins = coins - 4;
				numofCard += score[4];
			}
			else if (coins >= 3 && score[3] != 0) {
				coins = coins - 3;
				numofCard += score[3];
			}
			else if (coins >= 2 && score[2] != 0) {
				coins = coins - 2;
				numofCard += score[2];
			}
			else {
				coins = coins - 1;
				numofCard += score[1];
			}
		}
	}
	return numofCard;
}

void Blue::print(ostream& out) {
	out.put('B');
}

// Chili class functions
int Chili::getCardsPerCoin(int coins) {
	int numofCard = 0;

	if (coins == 0) {
		return numofCard;
	}
	else if (coins >= 1 && coins <= 4) {
		numofCard = score[coins];
		return numofCard;
	}
	else {
		while (coins >= 0) {
			if (coins == 0) {
				return numofCard;
			}
			else if (coins >= 4 && score[4] != 0) {
				coins = coins - 4;
				numofCard += score[4];
			}
			else if (coins >= 3 && score[3] != 0) {
				coins = coins - 3;
				numofCard += score[3];
			}
			else if (coins >= 2 && score[2] != 0) {
				coins = coins - 2;
				numofCard += score[2];
			}
			else {
				coins = coins - 1;
				numofCard += score[1];
			}
		}
	}
	return numofCard;
}

void Chili::print(ostream& out) {
	out.put('C');
}

// Stink class functions
int Stink::getCardsPerCoin(int coins) {
	int numofCard = 0;

	if (coins == 0) {
		return numofCard;
	}
	else if (coins >= 1 && coins <= 4) {
		numofCard = score[coins];
		return numofCard;
	}
	else {
		while (coins >= 0) {
			if (coins == 0) {
				return numofCard;
			}
			else if (coins >= 4 && score[4] != 0) {
				coins = coins - 4;
				numofCard += score[4];
			}
			else if (coins >= 3 && score[3] != 0) {
				coins = coins - 3;
				numofCard += score[3];
			}
			else if (coins >= 2 && score[2] != 0) {
				coins = coins - 2;
				numofCard += score[2];
			}
			else {
				coins = coins - 1;
				numofCard += score[1];
			}
		}
	}
	return numofCard;
}

void Stink::print(ostream& out) {
	out.put('S');
}

// Green class functions
int Green::getCardsPerCoin(int coins) {
	int numofCard = 0;

	if (coins == 0) {
		return numofCard;
	}
	else if (coins >= 1 && coins <= 4) {
		numofCard = score[coins];
		return numofCard;
	}
	else {
		while (coins >= 0) {
			if (coins == 0) {
				return numofCard;
			}
			else if (coins >= 4 && score[4] != 0) {
				coins = coins - 4;
				numofCard += score[4];
			}
			else if (coins >= 3 && score[3] != 0) {
				coins = coins - 3;
				numofCard += score[3];
			}
			else if (coins >= 2 && score[2] != 0) {
				coins = coins - 2;
				numofCard += score[2];
			}
			else {
				coins = coins - 1;
				numofCard += score[1];
			}
		}
	}
	return numofCard;
}

void Green::print(ostream& out) {
	out.put('G');
}

// Soy class functions
int soy::getCardsPerCoin(int coins) {
	int numofCard = 0;

	if (coins == 0) {
		return numofCard;
	}
	else if (coins >= 1 && coins <= 4) {
		numofCard = score[coins];
		return numofCard;
	}
	else {
		while (coins >= 0) {
			if (coins == 0) {
				return numofCard;
			}
			else if (coins >= 4 && score[4] != 0) {
				coins = coins - 4;
				numofCard += score[4];
			}
			else if (coins >= 3 && score[3] != 0) {
				coins = coins - 3;
				numofCard += score[3];
			}
			else if (coins >= 2 && score[2] != 0) {
				coins = coins - 2;
				numofCard += score[2];
			}
			else {
				coins = coins - 1;
				numofCard += score[1];
			}
		}
	}
	return numofCard;
}

void soy::print(ostream& out) {
	out.put('s');
}

// Black class functions
int black::getCardsPerCoin(int coins) {
	int numofCard = 0;

	if (coins == 0) {
		return numofCard;
	}
	else if (coins >= 1 && coins <= 4) {
		numofCard = score[coins];
		return numofCard;
	}
	else {
		while (coins >= 0) {
			if (coins == 0) {
				return numofCard;
			}
			else if (coins >= 4 && score[4] != 0) {
				coins = coins - 4;
				numofCard += score[4];
			}
			else if (coins >= 3 && score[3] != 0) {
				coins = coins - 3;
				numofCard += score[3];
			}
			else if (coins >= 2 && score[2] != 0) {
				coins = coins - 2;
				numofCard += score[2];
			}
			else {
				coins = coins - 1;
				numofCard += score[1];
			}
		}
	}
	return numofCard;
}

void black::print(ostream& out) {
	out.put('b');
}

// Red class functions
int Red::getCardsPerCoin(int coins) {
	int numofCard = 0;

	if (coins == 0) {
		return numofCard;
	}
	else if (coins >= 1 && coins <= 4) {
		numofCard = score[coins];
		return numofCard;
	}
	else {
		while (coins >= 0) {
			if (coins == 0) {
				return numofCard;
			}
			else if (coins >= 4 && score[4] != 0) {
				coins = coins - 4;
				numofCard += score[4];
			}
			else if (coins >= 3 && score[3] != 0) {
				coins = coins - 3;
				numofCard += score[3];
			}
			else if (coins >= 2 && score[2] != 0) {
				coins = coins - 2;
				numofCard += score[2];
			}
			else {
				coins = coins - 1;
				numofCard += score[1];
			}
		}
	}
	return numofCard;
}

void Red::print(ostream& out) {
	out.put('R');
}

// Garden class functions
int garden::getCardsPerCoin(int coins) {
	int numofCard = 0;

	if (coins == 0) {
		return numofCard;
	}
	else if (coins >= 1 && coins <= 4) {
		numofCard = score[coins];
		return numofCard;
	}
	else {
		while (coins >= 0) {
			if (coins == 0) {
				return numofCard;
			}
			else if (coins >= 4 && score[4] != 0) {
				coins = coins - 4;
				numofCard += score[4];
			}
			else if (coins >= 3 && score[3] != 0) {
				coins = coins - 3;
				numofCard += score[3];
			}
			else if (coins >= 2 && score[2] != 0) {
				coins = coins - 2;
				numofCard += score[2];
			}
			else {
				coins = coins - 1;
				numofCard += score[1];
			}
		}
	}
	return numofCard;
}

void garden::print(ostream& out) {
	out.put('g');
}

string Card::getName() {
	return name;
}

void Card::print(ostream& out) {

}
