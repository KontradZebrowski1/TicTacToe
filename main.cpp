#include <iostream>
#include "game.hpp"
#include <ctime>


int main()
{


srand((unsigned int)time(0));
	int start = rand()%2;
  game Gra;

  while(Gra.getStan())
  {
    if(start == 0)
    {
    Gra.akcjaGracza();
    if(Gra.getStan() == 1)
    Gra.akcjaKomputera();
    }
    else
    {
      Gra.akcjaKomputera();
      if(Gra.getStan() == 1)
      Gra.akcjaGracza();
    }
  }


}
