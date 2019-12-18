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

#endif //HAND_H
