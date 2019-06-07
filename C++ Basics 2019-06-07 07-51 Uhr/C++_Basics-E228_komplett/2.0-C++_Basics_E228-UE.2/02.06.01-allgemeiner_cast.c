// Gisela Neira
// C++ Basics E228
// * Programm 02.07.01 der C/C++ Programmierung
// * Typenumwandlung allgemeiner Cast

#include <stdio.h>

int main(int argc, char **argv)
{
    float x=0;
    int a=0, b=0;

    a = 10;
    b = 3;

	#if 0
	    x = a/b;
        printf("***Teilung a/b = x***\n");
        printf("a und b int-Werte, x float-Wert\n");
        printf("\nx wird in int-Wert als float-Format ausgegeben.\n");
        printf("a / b = x: > %f\n", x);
	#else
        // * Umwandlung des Resutlates in Float-Wert
        // * erzwungen durch das vorsetzen des allgemeinen Cast: (float).
        x =(float)a/b;
        printf("\nx wird als float-Wert ausgegeben ausgegeben.\n");
        printf("a / b = x: > %f\n", x);
	#endif

return 0;
}
