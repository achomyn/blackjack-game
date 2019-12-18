#include "Player.h"

using namespace std;

bool Player::isHitting() const
{
  cout << m_Name << ", do you want to hit? (Y/N): ";
  char response;
  cin >> response;
  return (response == 'y' || response == 'Y');
}

void Player::Win() const
{
  cout << m_Name << " wins!"<<endl;
}

void Player::Lose() const
{
  cout << m_Name << " loses."<<endl;
}

void Player::Push() const
{
  cout << m_Name << " pushes."<<endl;
}