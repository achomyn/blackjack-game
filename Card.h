#ifndef CARD_H
#define CARD_H
#include <iostream>

enum rank {Two = 2, Three = 3, Four = 4, Five = 5, Six = 6, Seven = 7, Eight = 8, Nine = 9, Ten = 10, Jack = 10, Queen = 10, King = 10, Ace = 11};
enum suit {Diamonds, Hearts, Spades, Clubs};

Class Card
{
public:
  Card(char val, suit s);
  int getValue() { return m_value; }
  bool isFaceUp() const {return faceUp;}
  void flip() {faceUp = !faceUp;}
  
private:
  char m_card; // '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A' For printing specific card in terminal even if it has the same value
  int m_value;
  int m_suit;
  bool faceUp;
};

#endif //CARD_H
