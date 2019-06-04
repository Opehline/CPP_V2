// Gisela Neira
// C++ Basics E228
// * Programm 02.02.03 der C/C++ Programmierung
// * const-Konstante in C Programmierung.

#include<stdio.h>

int main(int argc, char **argv)
{
    const double pi = 3.14159; 	// * const-Konstante lokal
    double d=0, r=0;
    char select=0;

    pi = 3.14; // Fehler!

    printf("Moechten Sie einen Radius (r) oder einen Durchmesser (d) eingeben?");
    scanf(" %c", &select);
    fflush(stdin);
    printf("Oh! Sie haben <%c> eingegeben\n\n", select);

    //pi = 3.14; // Fehler!

    if(select=='d')
	{
		printf("Durchmesser:\n");
		scanf("%lf", &d);
		fflush(stdin);
		printf("Umfang des Kreises: %lf\n", d * pi);
    }

    //pi = 3.14; // Fehler!

    if(select=='r')
	{
		printf("Radius:\n");
		scanf("%lf", &r);
		fflush(stdin);
		printf("Umfang des Kreises: %lf\n", 2 * r * pi);
    }

return 0;
}
