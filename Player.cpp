#include "Player.h"

using namespace std;
//Asks player if they want to hit or not
bool Player::isHitting() const
{
  cout << m_Name << ", do you want to hit? (Y/N): ";
  char response;
  cin >> response;
  return (response == 'y' || response == 'Y');
}
//Announces if the player wins
void Player::Win() const
{
  cout << m_Name << " wins!"<<endl;
}
//Announces if player lost
void Player::Lose() const
{
  cout << m_Name << " loses."<<endl;
}
//Announces that player pushes
void Player::Push() const
{
  cout << m_Name << " pushes."<<endl;
}
