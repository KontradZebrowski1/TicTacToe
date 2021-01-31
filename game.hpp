#include <memory>
#include "mecz.hpp"

class game
{
public:
game() {m = new mecz{};}

bool getStan() {return stan;}

void wyswietlWynik()
{
  std::cout<<"Twoj wynik to: "<<wynik<<"\n";
}
void akcjaGracza()
  {
    int action;
    std::cin >> action;
    m->set(action, 'x');
    m->plansza();
    m->check();
    wygrana();
  }
void akcjaGracza2()
  {
    int action;
    std::cin >> action;
    m->set(action, 'o');
    m->plansza();
    m->check();
    wygrana();
  }

void wygrana()
{
  if(m->getWynikMeczu() == 1)
  { std::cout << "wygrales!\n";stan = 0;}
  else if(m->getWynikMeczu() == -1)
  { std::cout << "przegrales!\n";stan = 0;}
}

private:
bool stan = 1;
int wynik = 0;
mecz *m;
};