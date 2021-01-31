#include <memory>
#include "mecz.hpp"

class game
{
public:void wyswietlWynik()
{
  std::cout<<"Twoj wynik to: "<<wynik<<"\n";
}

private:
bool stan = 1;
int wynik = 0;
};