// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.09.01 der C/C++ Programmierung
// * Hausaufgabe in C Programmierung.

#include <stdio.h>

int main(int argc, char **argv)
{
  
    float alter1=0, alter2=0, durchschnitt=0;

    printf("(1) Können Sie mir Ihr Alter verraten?: > ");
    scanf("%f", &alter1);
	fflush(stdin);
    printf("\n(2) Können Sie mir Ihr Alter verraten?: > ");
    scanf("%f", &alter2);
	fflush(stdin);

    durchschnitt = ((alter1+alter2)/2);
    printf("\nDer Durchschnitt ist: %.2f\n", durchschnitt);


return 0;
}
