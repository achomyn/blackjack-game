#include "GenericPlayer.h"

using namespace std;

bool GenericPlayer::isBusted() const
{
  return (getTotal() > 21);
}
void GenericPlayer::Bust() const
{
  cout << m_Name << " busts."<<endl;
}

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
void GenericPlayer::displayScore()
{
  cout<<m_Name<< " Score: "<<getTotal()<<endl<<endl;
}
void GenericPlayer::Clear()
{
  m_hand.clear();
}