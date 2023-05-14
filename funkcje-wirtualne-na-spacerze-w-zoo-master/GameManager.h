#ifndef GAMEMANAGER_H_H
#define GAMEMANAGER_H_H
#include "Player.h"

class GameManager
{
  Player &p1;
  Player &p2;

public:

GameManager(Player &p1, Player &p2);
void play();

};


#endif