#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include<string>
#include "GenericPlayer.h"

class Player : public GenericPlayer
{
public:
  Player(const std::string& name) : GenericPlayer(name) {};

  //check if player wants to hit
  virtual bool isHitting() const;

  void Win() const;

  void Lose() const;

  void Push() const;
};

#endif 