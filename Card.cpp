#include "Card.h"
using namespace std;

Card::Card(char val, int s)
{
  m_card = val;
  if (val == 'J' || val == 'Q' || val == 'K' || 'T')
    m_value = 10;
  else if (val == 'A')
    m_value = 11;
  else
    m_value = (val - '0');
  m_suit = suit;
}
