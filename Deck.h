#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include "Hand.h"

//A deck inherits the functions of Hand because it is essentially a 52 card hand that fills and shuffles
class Deck : public Hand
{
public:
  Deck();
  //randomizes cards
  void shuffle();
  //used to check when to shuffle
  int getSize() {return m_hand.size();}
  //takes a card from deck and passes it to hand
  void dealCard(Hand& hand);
  //refills the deck with standard 52 cards
  void fillDeck();
};

#endif //DECK_H
