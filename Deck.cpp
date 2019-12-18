#include "Deck.h"
#include <vector>
#include <random>
#include <algorithm>

//Deck is a hand that stores 52 cards, uses the hand constructor to reserve Card vector space and fills it
Deck::Deck() : Hand(52)
{
  fillDeck();
  shuffle();
}

//Takes the hand passed to it and adds the top card of the Deck to the hand, and deletes the card from the deck
void Deck::dealCard(Hand& hand)
{
  hand.addCard(m_hand.back());
  m_hand.pop_back();
}

//Empties the deck, creates a card val for all 13 cards, then adds a newly created card for those 13 for each of the 4 suits.
void Deck::fillDeck()
{
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
      addCard(new Card(val, j));
    }
  }
}

//Checks if deck is empty, if not it creates a Uniform random number generator  
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
