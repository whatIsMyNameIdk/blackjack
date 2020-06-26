#ifndef DECK_H
#define DECK_H
#include <vector>

#include "../card/card.h"

/*
 * Deck represents deck of 52 playing cards.
 * Operations:
 *  Crate a deck
 *  Take card
 *  Get size of deck
 *  Shuffle: create new object of deck
 */
class Deck {
  public:
    Deck(); // Fill availableCards
    Card takeCard(); // Takes card from deck
    std::vector<Card>::size_type getSize(); // Returns number of cards in deck
    void shuffle(); // Creates new deck of 52 cards
  private:
    std::vector<Card> availableCards; // Set of available cards 
};
#endif
