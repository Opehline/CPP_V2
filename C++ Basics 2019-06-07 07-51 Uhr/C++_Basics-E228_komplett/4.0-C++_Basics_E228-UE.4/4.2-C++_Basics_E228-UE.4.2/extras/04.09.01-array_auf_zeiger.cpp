// Gisela Neira
// C++ Basics E228
// * Programm 05.09.01 der C/C++ Programmierung
// * Array von Zeiger.

#include <iostream>

int main(int argc, char **argv)
{

    char *listeKleidung[] = {
         "Schuhe",
         "Hose",
         "Unterhose",
         "Rock",
         "Hut",
         "Jacke",
         "T-Shirt"
         };

    char woerter[2][6];

    woerter[0][0]='h';
    woerter[0][1]='a';
    woerter[0][2]='l';
    woerter[0][3]='l';
    woerter[0][4]='o';
    woerter[0][5]='\0';

    woerter[1][0]='F';
    woerter[1][1]='i';
    woerter[1][2]='s';
    woerter[1][3]='c';
    woerter[1][4]='h';
    woerter[1][5]='\0';


return 0;
}
