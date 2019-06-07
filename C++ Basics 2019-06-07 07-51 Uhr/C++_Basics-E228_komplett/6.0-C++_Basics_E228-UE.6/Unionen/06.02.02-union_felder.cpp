// Gisela Neira
// C++ Basics E228
// * Programm 06.02.02 der C/C++ Programmierung
// * Union: Es kann immer nur ein Feld der Union
// * benutzt werden.

#include <iostream>

/*
    Farbe
    1 = gelb
    2 = gruen
    3 = braun
*/
/*
    Geschmack
    1 = sauer
    2 = sauer oder suess
    3 = suess
    4 = bitter

*/

union Zitrone
{
    short int farbe;
    char geschmack;
    float gewicht;
};

int main(int argc, char **argv)
{
    union Zitrone zitrone1;

    zitrone1.farbe=1;
    zitrone1.geschmack=2;
   	std::cout << zitrone1.farbe << std::endl;		// * Was wird hier ausgegeben?


return 0;
}
