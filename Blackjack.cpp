#include "Blackjack.h"
// #include <ctime>

// Blackjack::Blackjack(const std::vector<std::string>& names)
// {
//   // create a std::vector of player from a std::vector of names
//   std::cout << "I'm in the constructor";
//   std::vector<std::string>::const_iterator pName;
//   for (pName = names.begin(); pName != names.end(); ++pName)
//   {
//     m_Players.push_back(Player(*pName));
//   }
//   srand(static_cast<unsigned int >(time(0)));
//   m_Deck.fillDeck();
//   m_Deck.shuffle();
// }

// void Blackjack::playRound()
// {
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < m_Players.size(); j++)
//     {
//       std::cout << "I'm here";
//       m_Deck.dealCard(m_Players[j]);
//     }
//     m_Deck.dealCard(m_Dealer);
//   }

//   m_Dealer.flipFirstCard();

//   for (int i = 0; i < m_Players.size(); i++)
//   {
//     m_Players[i].display();
//   }
//   m_Dealer.display();

//   for (int i = 0; i < m_Players.size(); i++)
//   {
//     while (m_Players[i].isHitting())
//     {
//       m_Deck.dealCard(m_Players[i]);
//       m_Players[i].display();
//     }
//   }

//   m_Dealer.flipFirstCard();
//   m_Dealer.display();

//   while (m_Dealer.isHitting())
//   {
//     m_Deck.dealCard(m_Dealer);
//     m_Dealer.display();
//   }
//   if (m_Dealer.isBusted())
//   {
//     for (int i = 0; i < m_Players.size(); i++)
//     {
//       if (!m_Players[i].isBusted())
//         m_Players[i].Win();
//     }
//   }
//   else
//   {
//     for (int i = 0; i < m_Players.size(); i++)
//     {
//       if (!m_Players[i].isBusted() && (m_Players[i].getTotal() > m_Dealer.getTotal()))
//         m_Players[i].Win();
//       else if (m_Players[i].getTotal() < m_Dealer.getTotal())
//         m_Players[i].Lose();
//       else
//         m_Players[i].Push();
//     }
//   }
//   for (int i = 0; i < m_Players.size(); i++)
//   {
//     m_Players[i].Clear();
//   }

// }