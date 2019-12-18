#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include "Hand.h"


class Deck : public Hand
{
public:
  Deck();
  void shuffle();
  int getSize() {return m_hand.size();}
  void dealCard(Hand& hand);
  void fillDeck();
};

#endif //DECK_H
