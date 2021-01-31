#include <iostream>
#include "game.hpp"
#include <string.h>


int czyWygrana()
{
return 0;
}

int main()
{
  /*mecz m;
  m.set(5, 'x');
  m.plansza();*/

  game Gra;
  while(Gra.getStan())
  {Gra.akcjaGracza();
  if(Gra.getStan() == 1)
  Gra.akcjaKomputera();}

 /*char jeden[2] = {'1','1'};
 std::string dwa= {'1','1'};

 if (strcmp(jeden, dwa) != 0)
 std::cout<<"tak";
 else
 std::cout<<"nie";*/
}