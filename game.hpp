#include <memory>
//#include "mecz.hpp"
#include "ai.hpp"

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
  { std::cout << "Ruch 'x':\n";
    int action;
    bool poprawny = false;
    while(poprawny == 0)
    {
    try{
    std::cin >> action;
    while(std::cin.fail())
            {
                std::cout << "Prosze podac wolna pozycje" << std::endl;
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cin >> action;
            }
            if(action < 1 || action>9)
  {
  throw std::string("blad");
  }
    if(m->kwadratBazowy[action-1] != 'x' && m->kwadratBazowy[action-1] != 'o' && action >=1 && action <=9)
            poprawny =1;
    else
    {std::cout << "Prosze podac wolna pozycje\n";} 
    }
    catch(const std::string wyj)
    {std::cout << "Nieprawidłowe dane. Wybierz numer niezajetego pola\n";}
    }
    m->set(action, 'x');
    m->plansza();
    m->check();
    wygrana();
  }
void akcjaGracza2()
  { std::cout << "Ruch 'o':\n";
    int action;
    bool poprawny = false;
    while(poprawny == 0)
    {
    try{
    std::cin >> action;
    while(std::cin.fail())
            {
                std::cout << "Prosze podac wolna pozycje" << std::endl;
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cin >> action;
            }
            if(action < 1 || action>9)
  {
  throw std::string("blad");
  }
    if(m->kwadratBazowy[action-1] != 'x' && m->kwadratBazowy[action-1] != 'o' && action >=1 && action <=9)
            poprawny =1;
    else
    {std::cout << "Prosze podac wolna pozycje\n";} 
    }
    catch(const std::string wyj)
    {std::cout << "Nieprawidłowe dane. Wybierz numer niezajetego pola\n";}
    }
    m->set(action, 'o');
    m->plansza();
    m->check();
    wygrana();
  }

void wygrana()
{
  if(m->getWynikMeczu() == 1)
  { wynik +=1; std::cout << "Wygrales!\nWynik: "<< wynik<<"\n";stan = 0;}
  else if(m->getWynikMeczu() == -1)
  { wynik=wynik-1; std::cout << "Przegrales!\nWynik: "<< wynik<<"\n";stan = 0;}
}

void akcjaKomputera()
{
    int action = a->ruch(*m);
    action = action+1;

    m->set(action, 'o');
    m->plansza();
    m->check();
    wygrana();
}


private:
bool stan = 1;
int wynik = 0;
mecz *m;
ai *a;
};