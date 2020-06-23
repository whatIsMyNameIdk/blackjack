#ifndef CARD_H
#define CARD_H
#include <iostream>

/*
 * Card represents a card from 2 to A.
 * Operations:
 * 	Print to stdout
 * 	Get value of a card (11 for Ace)
 */
class Card {
	public:
		friend std::ostream& operator<<(std::ostream& os, const Card& card); // Prints card to stdout
		unsigned getValue(); // Returns value of a card. A is treated as 11
	private:
		char value[2]; // value[0] is number or a letter
			       // value[1] is a card suit
};
#endif
