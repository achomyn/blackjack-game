#ifndef BLACKJACK_H
#define BLACKJACK_H

Class Blackjack
{
public:




private:

};
Class Card
{
public:
  enum rank {Two = 2, Three = 3, Four = 4, Five = 5, Six = 6, Seven = 7, Eight = 8, Nine = 9, Ten = 10, Jack = 10, Queen = 10, King = 10, Ace = 11};
  enum suit {Diamonds, Hearts, Spades, Clubs};
  Card(rank r, suit s);
private:
  rank m_value;
  suit m_suit;
};
Card::Card(rank s, suit r)
{
  if (val == 'J' || val == 'Q' || val == 'K' || '0')
    m_value = 10;
  else if (val == 'A')
    m_value = 11;
  else
    m_value =
  m_suit = rank;
}
Card(Two, Diamonds)

int Card::GetValue()
  value = m_value


#endif //BLACKJACK_H
