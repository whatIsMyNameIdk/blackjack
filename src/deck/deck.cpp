#include <cstdlib>
#include <ctime>
#include <algorithm>

#include "deck.h"

Deck::Deck()
{

}

Card Deck::takeCard()
{
  srand(time(NULL));
  decltype(availableCards.size()) cardIndex = std::rand() % availableCards.size();
  Card card = availableCards[cardIndex];
  std::swap(availableCards[cardIndex], *--availableCards.end());
  availableCards.pop_back();
  return card;
}

std::vector<Card>::size_type Deck::getSize()
{
  return availableCards.size();
} 

void Deck::shuffle()
{
  availableCards = {};
  for (auto i = 0; i != 4; ++i) {
    availableCards.push_back(Card("2"));
    availableCards.push_back(Card("3"));
    availableCards.push_back(Card("4"));
    availableCards.push_back(Card("5"));
    availableCards.push_back(Card("6"));
    availableCards.push_back(Card("7"));
    availableCards.push_back(Card("8"));
    availableCards.push_back(Card("9"));
    availableCards.push_back(Card("10"));
    availableCards.push_back(Card("J"));
    availableCards.push_back(Card("Q"));
    availableCards.push_back(Card("K"));
    availableCards.push_back(Card("A"));
  }
}
