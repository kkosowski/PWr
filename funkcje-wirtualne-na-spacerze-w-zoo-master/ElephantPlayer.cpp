#include "ElephantPlayer.h"

ElephantPlayer::ElephantPlayer(const std::string &name): Player(name){}


std::string ElephantPlayer::choice() const
{
  int random_weapon=rand()%10;
  std::string weapon;

  if(random_weapon>=0 and random_weapon<=1)
  {
    weapon="ROCK";
  }
  if(random_weapon>=2 and random_weapon<=5)
  {
    weapon="PAPER";
  }
  if(random_weapon>=6 and random_weapon<=9)
  {
    weapon="SCISSORS";
  }
  return weapon;
  
}
