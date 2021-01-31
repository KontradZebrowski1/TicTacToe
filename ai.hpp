#include "mecz.hpp"

class ai
{
public:

int ruch(mecz& m)
{

if(m.kwadratBazowy[0]=='o' && m.kwadratBazowy[1]=='o')
return 2;
else if(m.kwadratBazowy[3]=='o' && m.kwadratBazowy[4]=='o')
return 4;
else if(m.kwadratBazowy[6]=='o' && m.kwadratBazowy[7]=='o')
return 8;

else if(m.kwadratBazowy[2]=='o' && m.kwadratBazowy[1]=='o')
return 0;
else if(m.kwadratBazowy[4]=='o' && m.kwadratBazowy[5]=='o')
return 3;
else if(m.kwadratBazowy[7]=='o' && m.kwadratBazowy[8]=='o')
return 6;

else if(m.kwadratBazowy[0]=='o' && m.kwadratBazowy[3]=='o')
return 6;
else if(m.kwadratBazowy[1]=='o' && m.kwadratBazowy[4]=='o')
return 7;
else if(m.kwadratBazowy[2]=='o' && m.kwadratBazowy[5]=='o')
return 8;

else if(m.kwadratBazowy[3]=='o' && m.kwadratBazowy[6]=='o')
return 0;
else if(m.kwadratBazowy[4]=='o' && m.kwadratBazowy[7]=='o')
return 1;
else if(m.kwadratBazowy[5]=='o' && m.kwadratBazowy[8]=='o')
return 2;

else if(m.kwadratBazowy[0]=='o' && m.kwadratBazowy[4]=='o')
return 8;
else if(m.kwadratBazowy[4]=='o' && m.kwadratBazowy[8]=='o')
return 0;

else if(m.kwadratBazowy[2]=='o' && m.kwadratBazowy[4]=='o')
return 6;
else if(m.kwadratBazowy[4]=='o' && m.kwadratBazowy[6]=='o')
return 2;












else 
return 1;
}

};