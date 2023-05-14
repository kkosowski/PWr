#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(const std::string &name, const std::string &surname): Player(name), surname(surname){}

std::string HumanPlayer::choice() const
{
  int weapon;
  std::string weapon_in_hand;
  std::cout<<"Choose your weapon:"<<std::endl;
  std::cout<<"1.ROCK"<<std::endl;
  std::cout<<"2.PAPER"<<std::endl;
  std::cout<<"3.SCISSORS"<<std::endl;
  std::cin>>weapon;

  if(weapon==1)
  {
    weapon_in_hand="ROCK";
  }
  if(weapon==2)
  {
    weapon_in_hand="pAPER";
  }
  if(weapon==3)
  {
    weapon_in_hand="SCISSORS";
  }
  return weapon_in_hand;
}

std::string HumanPlayer::getName() const
{
  return name+" "+surname;
}