#ifndef DONKEYPLAYER_H_H
#define DONKEYPLAYER_H_H
#include "Player.h"

class DonkeyPlayer: public Player
{
public:
  explicit DonkeyPlayer(const std::string &name);

  std::string choice() const;

  
};


#endif