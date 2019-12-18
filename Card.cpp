#include "Card.h"
using namespace std;
// Assign values to the different cards
Card::Card(char val, int s)
{
  m_card = val;
  if (val == 'J' || val == 'Q' || val == 'K' || val == 'T')
    m_value = 10;
  else if (val == 'A')
    m_value = 11;
  else
    m_value = (val - '0');
  m_suit = s;
}
//Assign the suit to each card
std::string Card::getCard()
{
  string sName = "";
  switch(m_suit)
  {
    case 0:
      sName = "Diamonds";
      break;
    case 1:
      sName = "Hearts";
      break;
    case 2:
      sName = "Spades";
      break;
    case 3:
      sName = "Clubs";
      break;
  }
  //print the value and suit of the cards in hand
  cout<<m_card<< " of " << sName<<endl;
  return "";
}
