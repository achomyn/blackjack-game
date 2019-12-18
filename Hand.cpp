#include "Hand.h"
//reserves storage for the amount passed to the constructor
Hand::Hand(int n)
{
  m_hand.reserve(n);
}
//clears hand vector
void Hand::clear()
{
  m_hand.clear();
}
//get the total value of the hand and return the number.
int Hand::getTotal() const
{
  int sum = 0;
  for (int i = 0; i < m_hand.size(); i++)
  {
    if (m_hand[i]->isFaceUp())
    {
      if (m_hand[i]->getValue() != 11)
        sum += m_hand[i]->getValue();
      else
      {
        //check if the card is an Ace then make it either 1 or 11 value depending on what helps the player most.
        if (sum > 10)
          sum += 1;
        else
          sum += 11;
      }
    }
  }
  return sum;
}
//add card to hand when either the player hits or when dealt in the beginning.
bool Hand::addCard(Card* card)
{
  m_hand.push_back(card);
  return true;
}
