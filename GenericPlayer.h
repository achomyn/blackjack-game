#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H
#include "Hand.h"
#include <cstring>

class GenericPlayer : public Hand
{
public:
  GenericPlayer(const std::string& name = "") : Hand(5) {this->m_Name = name;} ;

  //indicate whther or not player wan to keep hitting
  virtual bool isHitting() const = 0;

  //return whether generic player has busted - has a totla greater than 21
  bool isBusted() const;

  //announces that the player busts
  void Bust() const;

  void display();
  void displayScore();
  void Clear();

protected:
  std::string m_Name;
};


#endif
