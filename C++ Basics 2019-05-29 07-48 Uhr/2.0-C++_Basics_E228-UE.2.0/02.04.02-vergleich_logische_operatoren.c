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

    #if 0  // Schalter!
    printf("\nRestermittlung einer Division: \n");
    // * Falsch:
    d=30;
    e=15;
    printf("Rest von 30/15: %f\n", d%e);	// * Modulo gibt immer eine ganze Zahl aus...
    #endif

	#if 0
    printf("\nRestermittlung einer Division: \n");
    // * Richtig:
    printf("\nRest von 7/3: %i\n", a%b);
    // * Werte wechseln um Teiler und Nichtteiler zu erhalten
    a=30;
    b=17;
    printf("Beispiel gebrauch eines Modul-Operators in einer Verzweigung (if).\n");
    if(a%b==0) // * Hier wurde der vergleichsoperator "ist gleich" benutzt. // Klammer nicht notwendig, weil nur 1x ==
    {
		printf("%i ist ein Vielfaches von %i.\n", a, b);
    }
    if(a%b!=0) // * Hier wurde der Vergleichsoperator "ist ungleich" benutzt.
    {
		printf("%i ist kein Vielfaches von %i!\n", a, b);
    }
    #endif

	#if 0
    printf("\nVergleichsoperatoren:\n");
    printf("Beispiel gebrauch von Vergleichsoperatoren in einer Verzweigung (if).\n");
    if(a>b) // * Hier wurde der vergleichsoperator "groesser als" benutzt.
    {
		printf("%i ist > als %i.\n", a, b);
    }
    if(a<b) // * Hier wurde der Vergleichsoperator "kleiner als" benutzt.
    {
		printf("%i ist < als %i.\n", a, b);
    }
	#endif

	#if 1
    printf("\nLogische Operatoren:\n");
    printf("Die Operatoren <und>, <nicht> und <oder>:\n");
    a=1;
    b=1;
    c = (a&&b);
    printf("c hat den Wert: %i\n", c);
    c = !(a&&b);
    printf("Nicht beide Lampen sind: %i\n", c);
    a=0;
    b=1;
    c = (a||b);
    printf("c hat den Wert: %i\n", c);
	#endif

return 0;
}

