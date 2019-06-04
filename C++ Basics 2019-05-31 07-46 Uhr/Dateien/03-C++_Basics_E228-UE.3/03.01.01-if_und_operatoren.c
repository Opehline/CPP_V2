// Gisela Neira
// C++ Basics E228
// * Programm 03.01.01 der C/C++ Programmierung
// * &&-Operator in if-Verzewigung
// * Variablennamen einsetzen und ausgegeben durch #define.

#include <stdio.h>
// * Setzt den Variablennamen:
#define nVar(nVar) #nVar

int main(int argc, char **argv)
{

    // * Ein- und Auskommentieren
    int a = 14, b = 3, c = 1;
    //int a = 1, b = 14, c = 3;
    //int a = 3, b = 1, c = 14;

    #if 1

		if((a>b)&&(b>c))
        printf("Reihenfolge: %s:%i > %s:%i > %s:%i.\n", nVar(a),a, nVar(b), b, nVar(c), c);
        printf("Probe\n");
        if((a>c)&&(c>b))
		{ printf("Reihenfolge: %s:%i > %s:%i > %s:%i.\n", nVar(a),a, nVar(c), c, nVar(b), b); }
		if((b>a)&&(a>c))
		{ printf("Reihenfolge: %s:%i > %s:%i > %s:%i.\n", nVar(b),b, nVar(a), a, nVar(c), c); }
		if((b>c)&&(c>a))
		{ printf("Reihenfolge: %s:%i > %s:%i > %s:%i.\n", nVar(b),b, nVar(c), c, nVar(a), a); }
		if((c>b)&&(b>a))
		{ printf("Reihenfolge: %s:%i > %s:%i > %s:%i.\n", nVar(c),c, nVar(b), b, nVar(a), a); }
		if((c>a)&&(a>b))
		{ printf("Reihenfolge: %s:%i > %s:%i > %s:%i.\n", nVar(c),c, nVar(a), a, nVar(b), b); }

    #endif

    printf("%s:%i\n", nVar(a), a);
    printf("%s:%i\n", nVar(b), b);
    printf("%s:%i\n", nVar(c), c);



//getchar();

return 0;
}
