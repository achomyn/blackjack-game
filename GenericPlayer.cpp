#include "GenericPlayer.h"

using namespace std;
//check if the player has busted or not
bool GenericPlayer::isBusted() const
{
  return (getTotal() > 21);
}
void GenericPlayer::Bust() const
{
  cout << m_Name << " busts."<<endl;
}
//relay the player name and show what cards they have
void GenericPlayer::display()
{
  cout<<m_Name<<" has:"<<endl;
  for (int i = 0; i < m_hand.size(); i++)
  {
    if(m_hand[i]->isFaceUp())
    {
      cout<<m_hand[i]->getCard();
    }
  }
  displayScore();
}
//Display the current score of named player
void GenericPlayer::displayScore()
{
  cout<<m_Name<< " Score: "<<getTotal()<<endl<<endl;
}
void GenericPlayer::Clear()
{
  m_hand.clear();
}
