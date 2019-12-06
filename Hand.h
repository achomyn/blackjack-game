#ifndef HAND_H
#define HAND_H

#include <vector>

class Hand
{
  public:
    Hand();
    bool add(Card* card);
    void clear();
    int getTotal() const;
  private:
    m_hand = push_back(card);
};

#endif //HAND_H
