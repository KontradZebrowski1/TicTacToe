#include "mecz.hpp"
#include <string.h>

class ai
{
public:

int ruch(mecz& m)
{

//wykonywanie wprost wygrywajacych

if(m.kwadratBazowy[0]=='o' && m.kwadratBazowy[1]=='o' && m.kwadratBazowy[2]!='x')
return 2;
else if(m.kwadratBazowy[3]=='o' && m.kwadratBazowy[4]=='o' && m.kwadratBazowy[5]!='x')
return 5;
else if(m.kwadratBazowy[6]=='o' && m.kwadratBazowy[7]=='o' && m.kwadratBazowy[8]!='x')
return 8;

else if(m.kwadratBazowy[2]=='o' && m.kwadratBazowy[1]=='o' && m.kwadratBazowy[0]!='x')
return 0;
else if(m.kwadratBazowy[4]=='o' && m.kwadratBazowy[5]=='o' && m.kwadratBazowy[3]!='x')
return 3;
else if(m.kwadratBazowy[7]=='o' && m.kwadratBazowy[8]=='o' && m.kwadratBazowy[6]!='x')
return 6;

else if(m.kwadratBazowy[0]=='o' && m.kwadratBazowy[3]=='o' && m.kwadratBazowy[6]!='x')
return 6;
else if(m.kwadratBazowy[1]=='o' && m.kwadratBazowy[4]=='o' && m.kwadratBazowy[7]!='x')
return 7;
else if(m.kwadratBazowy[2]=='o' && m.kwadratBazowy[5]=='o' && m.kwadratBazowy[8]!='x')
return 8;

else if(m.kwadratBazowy[3]=='o' && m.kwadratBazowy[6]=='o' && m.kwadratBazowy[0]!='x')
return 0;
else if(m.kwadratBazowy[4]=='o' && m.kwadratBazowy[7]=='o' && m.kwadratBazowy[1]!='x')
return 1;
else if(m.kwadratBazowy[5]=='o' && m.kwadratBazowy[8]=='o' && m.kwadratBazowy[2]!='x')
return 2;

else if(m.kwadratBazowy[0]=='o' && m.kwadratBazowy[4]=='o' && m.kwadratBazowy[8]!='x')
return 8;
else if(m.kwadratBazowy[4]=='o' && m.kwadratBazowy[8]=='o' && m.kwadratBazowy[0]!='x')
return 0;

else if(m.kwadratBazowy[2]=='o' && m.kwadratBazowy[4]=='o' && m.kwadratBazowy[6]!='x')
return 6;
else if(m.kwadratBazowy[4]=='o' && m.kwadratBazowy[6]=='o' && m.kwadratBazowy[2]!='x')
return 2;

else if(m.kwadratBazowy[0]=='o' && m.kwadratBazowy[2]=='o' && m.kwadratBazowy[1]!='x')
return 1;
else if(m.kwadratBazowy[3]=='o' && m.kwadratBazowy[5]=='o' && m.kwadratBazowy[4]!='x')
return 4;
else if(m.kwadratBazowy[6]=='o' && m.kwadratBazowy[8]=='o' && m.kwadratBazowy[7]!='x')
return 7;

else if(m.kwadratBazowy[0]=='o' && m.kwadratBazowy[6]=='o' && m.kwadratBazowy[3]!='x')
return 3;
else if(m.kwadratBazowy[1]=='o' && m.kwadratBazowy[7]=='o' && m.kwadratBazowy[4]!='x')
return 4;
else if(m.kwadratBazowy[2]=='o' && m.kwadratBazowy[8]=='o' && m.kwadratBazowy[5]!='x')
return 5;

else if(m.kwadratBazowy[0]=='o' && m.kwadratBazowy[8]=='o' && m.kwadratBazowy[4]!='x')
return 4;
else if(m.kwadratBazowy[2]=='o' && m.kwadratBazowy[6]=='o' && m.kwadratBazowy[4]!='x')
return 4;

//teraz blokowanie wprost przegrywajacych

else if(m.kwadratBazowy[0]=='x' && m.kwadratBazowy[1]=='x' && m.kwadratBazowy[2]!='o')
return 2;
else if(m.kwadratBazowy[3]=='x' && m.kwadratBazowy[4]=='x' && m.kwadratBazowy[4]!='o')
return 4;
else if(m.kwadratBazowy[6]=='x' && m.kwadratBazowy[7]=='x' && m.kwadratBazowy[8]!='o')
return 8;

else if(m.kwadratBazowy[2]=='x' && m.kwadratBazowy[1]=='x' && m.kwadratBazowy[0]!='o')
return 0;
else if(m.kwadratBazowy[4]=='x' && m.kwadratBazowy[5]=='x' && m.kwadratBazowy[3]!='o')
return 3;
else if(m.kwadratBazowy[7]=='x' && m.kwadratBazowy[8]=='x' && m.kwadratBazowy[6]!='o')
return 6;

else if(m.kwadratBazowy[0]=='x' && m.kwadratBazowy[3]=='x' && m.kwadratBazowy[6]!='o')
return 6;
else if(m.kwadratBazowy[1]=='x' && m.kwadratBazowy[4]=='x' && m.kwadratBazowy[7]!='o')
return 7;
else if(m.kwadratBazowy[2]=='x' && m.kwadratBazowy[5]=='x' && m.kwadratBazowy[8]!='o')
return 8;

else if(m.kwadratBazowy[3]=='x' && m.kwadratBazowy[6]=='x' && m.kwadratBazowy[0]!='o')
return 0;
else if(m.kwadratBazowy[4]=='x' && m.kwadratBazowy[7]=='x' && m.kwadratBazowy[1]!='o')
return 1;
else if(m.kwadratBazowy[5]=='x' && m.kwadratBazowy[8]=='x' && m.kwadratBazowy[2]!='o')
return 2;

else if(m.kwadratBazowy[0]=='x' && m.kwadratBazowy[4]=='x' && m.kwadratBazowy[8]!='o')
return 8;
else if(m.kwadratBazowy[4]=='x' && m.kwadratBazowy[8]=='x' && m.kwadratBazowy[0]!='o')
return 0;

else if(m.kwadratBazowy[2]=='x' && m.kwadratBazowy[4]=='x' && m.kwadratBazowy[6]!='o')
return 6;
else if(m.kwadratBazowy[4]=='x' && m.kwadratBazowy[6]=='x' && m.kwadratBazowy[2]!='o')
return 2;

else if(m.kwadratBazowy[0]=='x' && m.kwadratBazowy[2]=='x' && m.kwadratBazowy[1]!='o')
return 1;
else if(m.kwadratBazowy[3]=='x' && m.kwadratBazowy[5]=='x' && m.kwadratBazowy[4]!='o')
return 4;
else if(m.kwadratBazowy[6]=='x' && m.kwadratBazowy[8]=='x' && m.kwadratBazowy[7]!='o')
return 7;

else if(m.kwadratBazowy[0]=='x' && m.kwadratBazowy[6]=='x' && m.kwadratBazowy[3] != 'o')
{return 3;}
else if(m.kwadratBazowy[1]=='x' && m.kwadratBazowy[7]=='x' && m.kwadratBazowy[4]!='o')
return 4;
else if(m.kwadratBazowy[2]=='x' && m.kwadratBazowy[8]=='x' && m.kwadratBazowy[5]!='o')
return 5;

else if(m.kwadratBazowy[0]=='x' && m.kwadratBazowy[8]=='x' && m.kwadratBazowy[4]!='o')
return 4;
else if(m.kwadratBazowy[2]=='x' && m.kwadratBazowy[6]=='x' && m.kwadratBazowy[4]!='o')
return 4;

//problem z widelcami
//prosze nie robcie pulapek

//else if(strcmp(m.kwadratBazowy, "x,2,3,4,o,6,7,8,x") != 0)
//return 3;
//else if(strcmp(m.kwadratBazowy, "1,2,x,4,o,6,x,8,9") != 0)
//return 3;

else if(m.kwadratBazowy[0]=='x' && m.kwadratBazowy[8]=='x' && m.kwadratBazowy[4]=='o' && m.kwadratBazowy[1]=='2' && m.kwadratBazowy[2]=='3' && m.kwadratBazowy[3]=='4' && m.kwadratBazowy[5]=='6' && m.kwadratBazowy[6]=='7' && m.kwadratBazowy[7]=='8')
return 3;
else if(m.kwadratBazowy[2]=='x' && m.kwadratBazowy[6]=='x' && m.kwadratBazowy[4]=='o' && m.kwadratBazowy[1]=='2' && m.kwadratBazowy[0]=='1' && m.kwadratBazowy[3]=='4' && m.kwadratBazowy[5]=='6' && m.kwadratBazowy[8]=='9' && m.kwadratBazowy[7]=='8')
return 3;

//srodek jesli jest wolny

else if(m.kwadratBazowy[4]!='x' && m.kwadratBazowy[4]!='o')
return 4;

//opposite corners

else if(m.kwadratBazowy[0]=='x' && m.kwadratBazowy[8]!='x' && m.kwadratBazowy[8]!='o')
return 8;
else if(m.kwadratBazowy[8]=='x' && m.kwadratBazowy[0]!='x' && m.kwadratBazowy[0]!='o')
return 0;
else if(m.kwadratBazowy[2]=='x' && m.kwadratBazowy[6]!='x' && m.kwadratBazowy[6]!='o')
return 6;
else if(m.kwadratBazowy[6]=='x' && m.kwadratBazowy[2]!='x' && m.kwadratBazowy[2]!='o')
return 2;

else if(m.kwadratBazowy[0] !='x' && m.kwadratBazowy[0]!='o')
return 0;
else if(m.kwadratBazowy[2] !='x' && m.kwadratBazowy[2]!='o')
return 2;
else if(m.kwadratBazowy[6] !='x' && m.kwadratBazowy[6]!='o')
return 6;
else if(m.kwadratBazowy[8] !='x' && m.kwadratBazowy[8]!='o')
return 8;

//puste boki
else if(m.kwadratBazowy[1] !='x' && m.kwadratBazowy[1]!='o')
return 1;
else if(m.kwadratBazowy[3] !='x' && m.kwadratBazowy[3]!='o')
return 3;
else if(m.kwadratBazowy[5] !='x' && m.kwadratBazowy[5]!='o')
return 5;
else if(m.kwadratBazowy[7] !='x' && m.kwadratBazowy[7]!='o')
return 7;

else
return -1;
}

};
