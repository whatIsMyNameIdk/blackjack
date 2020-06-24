#ifndef CARD_H
#define CARD_H
#include <iostream>

/*
 * Card represents a card from 2 to A.
 * Operations:
 *  Create a card
 * 	Print to stdout
 * 	Get value of a card (11 for Ace)
 */
class Card {
	public:
    Card(const char* card); // Create card from C-style string.
                            // If string representation of card is not valid,
                            // constructor will throw runtime error
		friend std::ostream& operator<<(std::ostream& os, const Card& card); // Prints card to stdout
		inline short getValue(); // Returns value of a card. A is treated as 11
	private:
		char value[3]; // value[0] is number or a letter
			             // value[1] is a card suit
                   // value[2] is '\0'
};
#endif
