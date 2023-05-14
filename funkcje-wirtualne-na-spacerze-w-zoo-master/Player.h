#ifndef Player_h__
#define Player_h__
#include "string"
#include <iostream>


class Player
{
protected:

  std::string name;

public:

  explicit Player(const std::string &name);
  virtual std::string choice() const;
  virtual std::string getName() const;

};

#endif