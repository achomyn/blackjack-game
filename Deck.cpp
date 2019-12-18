#include "Deck.h"
#include <vector>
#include <random>
#include <algorithm>

Deck::Deck() : Hand(52)
{
  std::cout<<"de-hello"<<std::endl;
  fillDeck();
  std::cout<<"de-hello"<<std::endl;
  shuffle();
}
void Deck::dealCard(Hand& hand)
{
  hand.addCard(m_hand.back());
  m_hand.pop_back();
}
void Deck::fillDeck()
{
  int n = 0;
  m_hand.clear();
  char val;
  for (int i = 1; i <= 13; i++)
  {
    switch (i)
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
    for (int j = Diamonds; j <= Clubs; j++)
    {
      //std::cout<<"adding card "<<n <<std::endl;
      addCard(new Card(val, j));
      n++;
    }
  }
}
void Deck::shuffle()
{
  if (m_hand.empty())
    std::cout << "Deck is empty, cannot shuffle." << std::endl;
  else
  {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(m_hand.begin(), m_hand.end(), g);

  }
}
