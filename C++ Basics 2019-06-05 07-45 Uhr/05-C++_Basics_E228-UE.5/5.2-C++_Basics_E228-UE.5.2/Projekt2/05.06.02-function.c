#include <stdio.h>
#include "05.06.02-header.h"

float ergebnis;     // * Globale Variable

void summe(float a, float b)
{
    ergebnis=a+b;
    printf("Summe von a und b: %.2f\n", ergebnis);
}

void multiplikation(float a, float b)
{
    ergebnis=a*b;
    printf("Multiplikation von a und b: %.2f\n", ergebnis);
}

void division(float a, float b)
{
    ergebnis=a/b;
    printf("Division von a und b: %.2f\n", ergebnis);
}
