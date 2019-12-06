Card::Card(char val, int suit)
{
  m_card = val;
  if (val == 'J' || val == 'Q' || val == 'K' || '0')
    m_value = 10;
  else if (val == 'A')
    m_value = 11;
  else
    m_value = (val - '0');
  m_suit = suit;
}
