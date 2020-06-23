#ifndef DECK_H
#define DECK_H
#include <cstddef>

#include "../card/card.h"

/*
 * Deck represents deck of 52 playing cards.
 * Operations:
 *  Take card
 *  Get size of deck
 *  Shuffle: create new object of deck
 */
class Deck {
  public:
    Card takeCard(); // Takes card from deck
    size_t getSize(); // Returns number of cards in deck
    void shuffle(); // Creates new deck of 52 cards
  private:
    size_t size = 52; // Size of deck
};
#endif
