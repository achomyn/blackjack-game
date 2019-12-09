#include "Deck.h"

Deck::Deck()
{
  fillDeck();
  shuffle();
}
Deck::dealCard(Hand& hand)
{
  hand.add(m_deck.back());
  m_deck.pop_back();
}
Deck::fillDeck()
{
  if(!m_deck.empty())
    m_deck.clear();
  else
  {
    char val;
    for (int i = 1; i <= 13; i++)
    {
      switch(i)
      {
        case 1:
          val = 'A';
          break;
        case 2:
          val = '2';
          break;
        case 3:
          val = '3';
          break;
        case 4:
          val = '4';
          break;
        case 5:
          val = '5';
          break;
        case 6:
          val = '6';
          break;
        case 7:
          val = '7';
          break;
        case 8:
          val = '8';
          break;
        case 9:
          val = '9';
          break;
        case 10:
          val = 'T';
          break;
        case 11:
          val = 'J';
          break;
        case 12:
          val = 'Q';
          break;
        case 13:
          val = 'K';
          break;
      }
      for (int j = Diamonds; j <= Clubs; i++)
      {
        m_deck.addCard(Card(i,j));
      }
    }
  }
}
void Deck::shuffle()
{
  if(m_deck.empty())
    std::cout<<"Deck is empty, cannot shuffle."<<std::endl;
  else
    std::random_shuffle(m_deck.begin(),m_deck.end());
}
