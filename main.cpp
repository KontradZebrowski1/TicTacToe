#include <iostream>
#include "game.hpp"


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
  Gra.akcjaGracza2();}

 
}