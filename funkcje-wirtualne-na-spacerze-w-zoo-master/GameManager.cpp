#include "GameManager.h"

GameManager::GameManager(Player &p1, Player &p2): p1(p1), p2(p2){}



void GameManager::play()
{
  std::string P1=p1.choice();
  std::string P2=p2.choice();

  if(P1==P2)
  {
    std::cout<<"Players: "<<p1.getName()<<" and "<<p2.getName()<<std::endl;
    std::cout<<p1.getName()<<": "<<P1<<std::endl;
    std::cout<<p2.getName()<<": "<<P2<<std::endl;
    std::cout<<"DRAW";
  }
  if((P1=="ROCK" and P2=="SCISSORS") or (P1=="PAPER" and P2=="ROCK") or (P1=="SCISSORS" and P2=="PAPER"))
  {
    std::cout<<"Players: "<<p1.getName()<<" and "<<p2.getName()<<std::endl;
    std::cout<<p1.getName()<<": "<<P1<<std::endl;
    std::cout<<p2.getName()<<": "<<P2<<std::endl;
    std::cout<<p1.getName()<<" WON!";
  }
  if((P2=="ROCK" and P1=="SCISSORS") or (P2=="PAPER" and P1=="ROCK") or (P2=="SCISSORS" and P1=="PAPER"))
  {
    std::cout<<"Players: "<<p1.getName()<<" and "<<p2.getName()<<std::endl;
    std::cout<<p1.getName()<<": "<<P1<<std::endl;
    std::cout<<p2.getName()<<": "<<P2<<std::endl;
    std::cout<<p2.getName()<<" WON!";
  }

}