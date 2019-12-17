#include <iostream>
#include <vector>
#include <cstring>
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include "Dealer.h"
#include <cstring>
#include <vector>
#include <ctime>
using namespace std;


void playRound(Deck & m_Deck, vector<Player>& m_Players, Dealer & m_Dealer)
{
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < m_Players.size(); j++)
    {
      m_Deck.dealCard(m_Players[j]);
    }
    m_Deck.dealCard(m_Dealer);
  }

  m_Dealer.flipFirstCard();

  for (int i = 0; i < m_Players.size(); i++)
  {
    m_Players[i].display();
  }
  m_Dealer.display();

  for (int i = 0; i < m_Players.size(); i++)
  {
    m_Players[i].display();
    while (!(m_Players[i].isBusted()) && m_Players[i].isHitting())
    {
      m_Deck.dealCard(m_Players[i]);
      m_Players[i].display();
    }
    
  }

  m_Dealer.flipFirstCard();
  m_Dealer.display();

  while (m_Dealer.isHitting())
  {
    m_Deck.dealCard(m_Dealer);
    m_Dealer.display();
  }
  //cout << "Dealer Score: " << m_Dealer.getTotal() << endl;
  //cout << "Player Score: " << m_Players[0].getTotal() << endl;
  if (m_Dealer.isBusted())
  {
    for (int i = 0; i < m_Players.size(); i++)
    {
      if (!m_Players[i].isBusted())
        m_Players[i].Win();
    }
  }
  else
  {
    for (int i = 0; i < m_Players.size(); i++)
    {
      if (!m_Players[i].isBusted())
      {
        if (m_Players[i].getTotal() > m_Dealer.getTotal())
          m_Players[i].Win();
        else if (m_Players[i].getTotal() < m_Dealer.getTotal())
          m_Players[i].Lose();
        else
          m_Players[i].Push();
      }
      else
        m_Players[i].Lose();
    }
  }
  for (int i = 0; i < m_Players.size(); i++)
  {
    m_Players[i].Clear();
  }
  m_Dealer.Clear();
  if(m_Deck.getSize() < 52/3)
  {
    m_Deck.clear();
    m_Deck.fillDeck();
    m_Deck.shuffle();
  }
}

int main()
{

  int numOfPlayers = 0;
  while (numOfPlayers < 1 || numOfPlayers > 7)
  {
    cout << "How Many Players ? (1 to 7): ";
    cin >> numOfPlayers;
  }
  vector<string> names;
  cout << endl;
  for (int i = 0; i < numOfPlayers; i++)
  {
    string name;
    cout << "Enter name for Player " << i << ": ";
    cin >> name;
    names.push_back(name);
  }
  Deck m_Deck;
  Dealer m_Dealer;
  vector<Player> m_Players;

  std::vector<std::string>::const_iterator pName;
  for (pName = names.begin(); pName != names.end(); ++pName)
  {
    m_Players.push_back(Player(*pName));
  }
  srand(static_cast<unsigned int >(time(0)));
  m_Deck.fillDeck();
  m_Deck.shuffle();

  char keepPlaying = 'y';
  while (keepPlaying != 'n' && keepPlaying != 'N')
  {
    cout << "Round Start: " << endl;

    playRound(m_Deck, m_Players, m_Dealer);
    cout << "Do you want to play again? (Y/N): ";
    cin >> keepPlaying;
  }
  return 0;
}
