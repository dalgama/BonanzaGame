#include "Card.h"

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
