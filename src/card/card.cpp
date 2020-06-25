#include <stdexcept>

#include "card.h"

Card::Card(const std::string &card)
{
  // Check if size of initializer string is 1 or 2.
  // If size is 2 card initializer can be only "10"
  if (card.size() != 1 && card.size() != 2)
    throw (std::runtime_error("Invalid size of initializer string"));
  switch (card[0]) {
    case '1':
      if (card.size() != 2 || card[1] != '0')
        throw (std::runtime_error("Invalid card number or letter"));
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case 'J':
    case 'Q':
    case 'K':
    case 'A':
      value = card[0];
      break;
    default:
      throw (std::runtime_error("Invalid card number or letter"));   
  }
}
