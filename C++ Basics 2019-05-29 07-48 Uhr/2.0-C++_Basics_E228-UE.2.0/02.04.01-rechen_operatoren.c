// Gisela Neira
// C++ Basics E228
// * Programm 02.05.01 der C/C++ Programmierung
// * Rechen-, Vergleichs- und Logische Operatoren.
// * Variablennamen einsetzen und ausgegeben durch #define.

#include<stdio.h>
#define nVar(nVar) #nVar // * Variablenname wird zurueckgegeben

int main(int argc, char **argv)
{
    int a=0, b=0, c=0, f=0;
    float d=0, e=0;

    a = 7;
    b = 3;

	#if 1
		printf("\nAddition mit Zahlen %i + %i =  %i \n", a, b, 6+3);
	    printf("Addition mit Variablen: %s=%i und %s=%i => %s + %s = %i\n", nVar(a), a, nVar(b), b, nVar(a), nVar(b), a+b);
	    c = 4;
	    f = 6;
	    c += f; // * Ist gleich zu "c = c + f;"
	    printf("Addition mit Ergebnisvariable: %s=4 und %s=6 => %s + %s = %s =  %i\n", nVar(a), nVar(b), nVar(a), nVar(b), nVar(c), c);

	    printf("\nSubtraktion mit Zahlen 6 - 7 =  %i \n", 6-7);
	    printf("Subtraktion mit Variablen: a=%i und b=%i => a - b = %i\n", a, b, a-b);
	    c = 4;
	    f = 6;
	    c -= f;
	    printf("Subtraktion mit Ergebnisvariable: a=4 und b=6 => a - b = c =  %i\n", c);

	    printf("\nMultiplikation mit Zahlen 6 * 7 =  %i \n", 6*7);
	    printf("Multiplikation mit Variablen: a=%i und b=%i => a * b = %i\n", a, b, a*b);
	    c = 4;
	    f = 6;
	    c *= f;
	    printf("Multiplikation mit Ergebnisvariable: a=4 und b=6 => a * b = c =  %i\n", c);

	    printf("\nDivision mit Zahlen 21 / 7 =  %i \n", 21/7);
	    printf("Division mit Variablen: a=%i und b=%i => a / b = %i\n", a, b, a/b);
	    c = 18;
	    f = 6;
	    c /= f;
	    printf("Division mit Ergebnisvariable: a=18 und b=6 => a / b = c =  %i\n", c);

	    printf("\nRestrechnung (%% = Modulo) mit Zahlen 23 %% 7 =  %i \n", 23%7);
	    a = 16;
	    b = 7;
	    printf("Restrechnung (%% = Modulo) mit Variablen: a=%i und b=%i => a %% b = %i\n", a, b, a%b);
	    c = 18;
	    f = 6;
	    c %= f;
	    printf("Restrechnung (%% = Modulo) mit Ergebnisvariable: a=18 und b=6 => a %% b = c =  %i\n", c);
	#endif
    printf("\nRestermittlung einer Division: \n");

return 0;
}
