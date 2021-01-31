#include <iostream>

class mecz
{
public:
mecz() {plansza();}

/*int czyWygrana()
{ return 0; }*/

void plansza()
{
  std::cout << "\n "<<kwadratBazowy[0]<<" | "<<kwadratBazowy[1]<<" | "<<kwadratBazowy[2]<<" \n---|---|---\n "<<kwadratBazowy[3]<<" | "<<kwadratBazowy[4]<<" | "<<kwadratBazowy[5]<<" \n---|---|---\n "<<kwadratBazowy[6]<<" | "<<kwadratBazowy[7]<<" | "<<kwadratBazowy[8]<<" \n";
}


void set(int a, char c)
{
kwadratBazowy[a-1] = c;
}

int getWynikMeczu() {return wynikMeczu;}
bool getStanMeczu() {return stanMeczu;}

void check()
{
  if(kwadratBazowy[0]==kwadratBazowy[1] && kwadratBazowy[1]==kwadratBazowy[2])
  {
    if (kwadratBazowy[1]=='x')
    { wynikMeczu = 1; stanMeczu = 0;}
    else if(kwadratBazowy[1] == 'o')
    { wynikMeczu = -1; stanMeczu = 0;}
  }
  if(kwadratBazowy[3]==kwadratBazowy[4] && kwadratBazowy[4]==kwadratBazowy[5])
  {
    if (kwadratBazowy[4]=='x')
    { wynikMeczu = 1; stanMeczu = 0;}
    else if(kwadratBazowy[4] == 'o')
    { wynikMeczu = -1; stanMeczu = 0;}
  }
  if(kwadratBazowy[6]==kwadratBazowy[7] && kwadratBazowy[7]==kwadratBazowy[8])
  {
    if (kwadratBazowy[7]=='x')
    { wynikMeczu = 1; stanMeczu = 0;}
    else if(kwadratBazowy[7] == 'o')
    { wynikMeczu = -1; stanMeczu = 0;}
  }

  if(kwadratBazowy[0]==kwadratBazowy[3] && kwadratBazowy[3]==kwadratBazowy[6])
  {
    if (kwadratBazowy[3]=='x')
    { wynikMeczu = 1; stanMeczu = 0;}
    else if(kwadratBazowy[3] == 'o')
    { wynikMeczu = -1; stanMeczu = 0;}
  }
  if(kwadratBazowy[1]==kwadratBazowy[4] && kwadratBazowy[4]==kwadratBazowy[7])
  {
    if (kwadratBazowy[4]=='x')
    { wynikMeczu = 1; stanMeczu = 0;}
    else if(kwadratBazowy[4] == 'o')
    { wynikMeczu = -1; stanMeczu = 0;}
  }
  if(kwadratBazowy[2]==kwadratBazowy[5] && kwadratBazowy[5]==kwadratBazowy[8])
  {
    if (kwadratBazowy[5]=='x')
    { wynikMeczu = 1; stanMeczu = 0;}
    else if(kwadratBazowy[5] == 'o')
    { wynikMeczu = -1; stanMeczu = 0;}
  }

  if(kwadratBazowy[0]==kwadratBazowy[4] && kwadratBazowy[4]==kwadratBazowy[8])
  {
    if (kwadratBazowy[4]=='x')
    { wynikMeczu = 1; stanMeczu = 0;}
    else if(kwadratBazowy[4] == 'o')
    { wynikMeczu = -1; stanMeczu = 0;}
  }
  if(kwadratBazowy[2]==kwadratBazowy[4] && kwadratBazowy[4]==kwadratBazowy[6])
  {
    if (kwadratBazowy[4]=='x')
    { wynikMeczu = 1; stanMeczu = 0;}
    else if(kwadratBazowy[4] == 'o')
    { wynikMeczu = -1; stanMeczu = 0;}
  }
}

char* obrotPrawo()
{
  char obrocony[9] = {kwadratBazowy[6],kwadratBazowy[3],kwadratBazowy[0],kwadratBazowy[7],kwadratBazowy[4],kwadratBazowy[1],kwadratBazowy[8],kwadratBazowy[5],kwadratBazowy[2]};
  return obrocony;
}

char* obrotLewo()
{
  char obrocony[9] = {kwadratBazowy[2],kwadratBazowy[5],kwadratBazowy[8],kwadratBazowy[1],kwadratBazowy[4],kwadratBazowy[7],kwadratBazowy[0],kwadratBazowy[3],kwadratBazowy[6]};
  return obrocony;
}

char* obrot()
{
  char obrocony[9] = {kwadratBazowy[8],kwadratBazowy[7],kwadratBazowy[6],kwadratBazowy[5],kwadratBazowy[4],kwadratBazowy[3],kwadratBazowy[2],kwadratBazowy[1],kwadratBazowy[0]};
  return obrocony;
}

char* symY()
{
  char symetY[9] = {kwadratBazowy[2],kwadratBazowy[1],kwadratBazowy[0],kwadratBazowy[5],kwadratBazowy[4],kwadratBazowy[3],kwadratBazowy[8],kwadratBazowy[7],kwadratBazowy[6]};
  return symetY;
}

char* symX()
{
  char symetX[9] = {kwadratBazowy[6],kwadratBazowy[7],kwadratBazowy[8],kwadratBazowy[3],kwadratBazowy[4],kwadratBazowy[5],kwadratBazowy[0],kwadratBazowy[7],kwadratBazowy[2]};
  return symetX;
}

char* symXY()
{
  char symetX[9] = {kwadratBazowy[0],kwadratBazowy[3],kwadratBazowy[6],kwadratBazowy[1],kwadratBazowy[4],kwadratBazowy[7],kwadratBazowy[2],kwadratBazowy[5],kwadratBazowy[8]};
  return symetX;
}

char* symYX()
{
  char symetX[9] = {kwadratBazowy[8],kwadratBazowy[5],kwadratBazowy[2],kwadratBazowy[7],kwadratBazowy[4],kwadratBazowy[1],kwadratBazowy[6],kwadratBazowy[3],kwadratBazowy[0]};
  return symetX;
}

char kwadratBazowy[9] = {'1','2','3','4','5','6','7','8','9'};
private:

int wynikMeczu = 0;
bool stanMeczu = 1;

};