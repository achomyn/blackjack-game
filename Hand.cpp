#include "Hand.h"

Hand::Hand(int n)
{
  m_hand.reserve(n);
}

void Hand::clear()
{
  m_hand.clear();
}
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
        if (sum > 10)
          sum += 1;
        else
          sum += 11;
      }
    }
  }
  return sum;
}
bool Hand::addCard(Card* card)
{
  m_hand.push_back(card);
  return true;
}