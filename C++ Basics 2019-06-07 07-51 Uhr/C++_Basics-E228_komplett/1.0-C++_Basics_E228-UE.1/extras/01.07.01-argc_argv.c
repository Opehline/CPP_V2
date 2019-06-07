// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.07.01 der C/C++ Programmierung
// * Ausgabe eines Funktionsresultat C

#include <stdio.h>
#include <stdlib.h> //atoi

int cuadrat(int a)
{
    return(a*a);
}

int main(int argc, char **argv)
// String oder Kette: "5hrfgrh"
// Char oder Zeichen: 'f'
// Number Zahl: 5
{
    int f = atoi(argv[1]);
    printf("\n%i\n",cuadrat(f));

return 0;
}
