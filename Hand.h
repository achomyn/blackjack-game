#ifndef HAND_H
#define HAND_H

#include <vector>

class Hand
{
  public:
    Hand(Card* c1, Card* c2);
    bool add(Card* card);
    void clear();
    int getTotal() const;
  private:
    std::vector<Card*> m_hand;
};

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

#endif //HAND_H
