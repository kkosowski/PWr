#include <iostream>
#include "Player.h"
#include "HumanPlayer.h"
#include "DonkeyPlayer.h"
#include "ElephantPlayer.h"
#include "MonkeyPlayer.h"
#include "GameManager.h"
#include "ctime"





int main() {

  srand(time(NULL));

  HumanPlayer H("Jan","Kowalski");
  MonkeyPlayer M("Maupa");
  DonkeyPlayer D("Osioł");
  ElephantPlayer E("Tromba");

  GameManager game (H,D);
  game.play();


  
}
  