#ifndef HumanPlayer_h__
#define HumanPlayer_h__
#include "Player.h"

class HumanPlayer: public Player
{
  std::string surname;

public:
  HumanPlayer(const std::string &name, const std::string &surname);
  std::string choice() const;
  std::string getName() const;
  

};

#endif