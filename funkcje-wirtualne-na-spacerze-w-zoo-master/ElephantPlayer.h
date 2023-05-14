#ifndef ELEPHANTPLAYER_H_H
#define ELEPHANTPLAYER_H_H
#include "Player.h"

class ElephantPlayer: public Player
{

public:

  explicit ElephantPlayer(const std::string &name);
  std::string choice() const;

  
};


#endif