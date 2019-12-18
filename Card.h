#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <cstring>



class Card
{
public:
  Card(char val, int s);
  //used to get numerical value of card for scoring
  int getValue() { return m_value; }
  //prints name of card and suit it belongs to
  std::string getCard();
  //if card is faceup relay the value and suit
  bool isFaceUp() const {return faceUp;}
  //used to hide card (Dealer only shows 1 card in beginning)
  void flip() {faceUp = !faceUp;}

private:
  char m_card; // '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A' For printing specific card in terminal even if it has the same value
  int m_value;
  int m_suit;
  bool faceUp = 1;
};

#endif //CARD_H
