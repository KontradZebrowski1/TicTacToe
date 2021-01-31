#include <iostream>

class mecz
{
public:

int czyWygrana()
{
return 0;
}
void plansza()
{
  std::cout << "\n "<<kwadratBazowy[0]<<" | "<<kwadratBazowy[1]<<" | "<<kwadratBazowy[2]<<" \n---|---|---\n "<<kwadratBazowy[3]<<" | "<<kwadratBazowy[4]<<" | "<<kwadratBazowy[5]<<" \n---|---|---\n "<<kwadratBazowy[6]<<" | "<<kwadratBazowy[7]<<" | "<<kwadratBazowy[8]<<" \n";
}

void set(int a, char c)
{
kwadratBazowy[a-1] = c;
}

private:

char kwadratBazowy[9] = {'1','2','3','4','5','6','7','8','9'};
};