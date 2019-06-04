// Gisela Neira
// C++ Basics E228
// * Funktionen 06.0x.0x der C/C++ Programmierung
// * statische Variable als globale Variable
// * (nur gueltig innerhalb dieser Quellcodedatei.)

#include <stdio.h>

int zahlWert();
const int zahl = zahlWert(); // * Konstante Globale Variable

int main(int argc, char **argv)
{
    printf("%i Kubikmilimeter\n\n", zahl);

return 0;
}

int zahlWert()
{
    int var=0;
    printf("> ");
    scanf("%i", &var);
	return var;
}
