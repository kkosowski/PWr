#ifndef MONKEYPLAYER_H_H
#define MONKEYPLAYER_H_H
#include "Player.h"

class MonkeyPlayer: public Player
{

public:

  explicit MonkeyPlayer(const std::string &name);
  std::string choice() const;
  
};


#endif