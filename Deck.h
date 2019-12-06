#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include "Hand.h"


Class Deck : public Hand
{
public:
  void shuffle();
  void dealCard(Hand& hand);
  void fillDeck();
private:
  std::vector<Card*> m_deck;

};

#endif //DECK_H
