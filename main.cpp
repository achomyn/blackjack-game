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

//Plays a round of Blackjack
void playRound(Deck & m_Deck, vector<Player>& m_Players, Dealer & m_Dealer)
{
  //First deal 2 cards to all players and Dealer
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < m_Players.size(); j++)
    {
      m_Deck.dealCard(m_Players[j]);
    }
    m_Deck.dealCard(m_Dealer);
  }
  //hide dealer's first card
  m_Dealer.flipFirstCard();

  //display all players hands followed by the dealer (Score included)
  for (int i = 0; i < m_Players.size(); i++)
  {
    m_Players[i+1].display();
  }
  m_Dealer.display();
  //displays current player's hand and asks if they want to hit, each time they do their new hand is shown with new score until they bust or decide to stop hitting
  for (int i = 0; i < m_Players.size(); i++)
  {
    m_Players[i].display();
    while (!(m_Players[i].isBusted()) && m_Players[i].isHitting())
    {
      m_Deck.dealCard(m_Players[i]);
      m_Players[i].display();
    }

  }
  //reveal Dealer's hidden card
  m_Dealer.flipFirstCard();
  m_Dealer.display();
  //if Dealer must continue hitting until their hand has at least 17 points or they bust.
  while (m_Dealer.isHitting())
  {
    m_Deck.dealCard(m_Dealer);
    m_Dealer.display();
  }
  //If dealer busted and players did not, the players who didn't automatically win the hand
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
    //Checks all players to see whether they busted, won/lost the hand, or tied with the dealer and pushed
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
        m_Players[i].Bust();
    }
  }
  //Clear all player hands followed by the dealer's
  for (int i = 0; i < m_Players.size(); i++)
  {
    m_Players[i].Clear();
  }
  m_Dealer.Clear();
  //if the deck size is less than ~17, empty the deck, refill it, and shuffle
  if(m_Deck.getSize() < 52/3)
  {
    m_Deck.clear();
    m_Deck.fillDeck();
    m_Deck.shuffle();
  }
}

int main()
{
  //Asks user for number of players
  int numOfPlayers = 0;
  while (numOfPlayers < 1 || numOfPlayers > 7)
  {
    cout << "How Many Players ? (1 to 7): ";
    cin >> numOfPlayers;
  }
  //Asks for names of each player
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
//passes names to player constructors
  std::vector<std::string>::const_iterator pName;
  for (pName = names.begin(); pName != names.end(); ++pName)
  {
    m_Players.push_back(Player(*pName));
  }
  //generates random seed
  srand(static_cast<unsigned int >(time(0)));
//asks user if they want to keep playing, if they do the playRound function is called again
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
