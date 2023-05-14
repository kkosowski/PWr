
#include "DonkeyPlayer.h"


DonkeyPlayer::DonkeyPlayer(const std::string &name): Player( name){}

std::string DonkeyPlayer::choice() const 
{
  std::string weapon="ROCK";

  return weapon;
}
