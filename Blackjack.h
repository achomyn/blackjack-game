#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include "Dealer.h"
#include <cstring>
#include <vector>

class Blackjack
{
public:
  Blackjack(const std::vector<std::string>& names);
  void playRound();
private:
  Deck m_Deck;
  Dealer m_Dealer;
  std::vector<Player> m_Players;

};

#endif //BLACKJACK_H
