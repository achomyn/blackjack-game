#ifndef DEALER_H
#define DEALER_H
#include <iostream>
#include<string>
#include "GenericPlayer.h"

class Dealer : public GenericPlayer
{
public:
  Dealer() : GenericPlayer("Dealer"){};
  //check if Dealer wants to hit
  virtual bool isHitting() const {return (getTotal() < 17);}

  void flipFirstCard();
};

#endif