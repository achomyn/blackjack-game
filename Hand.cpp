#include "Hand.h"

Hand::Hand(Card* c1, Card* c2)
{
  m_hand.addCard(c1);
  m_hand.addCard(c2);
}
void Hand::clear()
{
  m_hand.clear();
}
int Hand::getTotal() const
{

}
bool Hand::add(Card* card);
void Hand::clear();
int Hand::getTotal() const;
