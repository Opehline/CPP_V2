// Gisela Neira
// C++ Basics E228
// * Funktionen 06.04.02 der C/C++ Programmierung
// * statische Variable als Funktionsvariable
// * Die statische Variable ist auch ausserhalb der
// * Funktion in der sie deklariert wurde gueltig.
// * (nur gueltig innerhalb dieser Quellcodedatei.)

#include <stdio.h>
/*
|.....a....| // * Immer wieder geloescht
----------------------------


|------static-----| // * Nicht geloescht

*/

void add5()
{
    int a = 10;
    static int staticVariable = 10;

    a += 5; // * a=a+5:
    staticVariable += 5;

    printf("normale Variable = %d, statische Variable = %d\n", a, staticVariable);
}


int main()
{
    int i;

    for(i = 0; i <= 5; ++i)
    {
		add5();
		//printf("normale statische Variable = %d\n", staticVariable);
    }

	//printf("normale statische Variable = %d\n", staticVariable);

    printf("\nDie statische Variable ist auch in einer anderen Funktion gueltig.\n");
    printf("\nNuetzlich falls man keine globale Variable benutzen moechte.\n\n");

}
