#include "MonkeyPlayer.h"

MonkeyPlayer::MonkeyPlayer(const std::string &name): Player(name){}

std::string MonkeyPlayer::choice() const
{
  int random_weapon=rand()%2;
  std::string weapon;

  if(random_weapon==0)
  {
    weapon="ROCK";
  }
  if(random_weapon==1)
  {
    weapon="PAPER";
  }
  if(random_weapon==2)
  {
    weapon="SCISSORS";
  }
  return weapon;
  
}
