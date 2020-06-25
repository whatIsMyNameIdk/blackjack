#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>

/*
 * Card represents a card from 2 to A.
 * Operations:
 *  Create a card
 * 	Print to stdout
 * 	Get value of a card (11 for Ace)
 */
class Card {
	public:
    Card(const std::string &card); // Create card from string.
                              // If string representation of card is not valid,
                              // constructor will throw runtime error
		friend std::ostream& operator<<(std::ostream& os, const Card& card); // Prints card to stdout
		inline short getValue(); // Returns value of a card. A is treated as 11
	private:
		char value; // value is number or a letter. 10 is treated as 1
};
#endif
