// Gisela Neira
// C++ Basics E228
// * Programm 04.03.01 der C/C++ Programmierung
// * Array: Umkehrung der Ausgabe eines Arrays
// * Arrays koennen nur als Call by Referenz
// * an eine Funktion uebergeben werden!!

#include <iostream>

#define EINFELD

#define MAX 10

//int reihenfolge(int(* flop)) 	// * richtig
int reihenfolge(int flop[MAX]) 	// * richtig
//int reihenfolge(int flop[]) 		// * richtig
//int reihenfolge(int &flop) 		// * falsch
{
    int i=0;

    std::cout <<"Ausgabe des a-Arrays in richtiger Reihenfolge;" << std::endl;;

    for(i=0; i<=9; i++)
    {
	  std::cout << i << " " << flop[i] << "\n";
    }
}

int umdrehen(int *a)
{
    int i=0;

    std::cout <<"Umdrehen der Ausgabe des a-Arrays:" << std::endl;;

    for(i=MAX-1; i>=0; i--)
    {
	  std::cout << i << " " << a[i] << "\n";
    }

}

#ifdef EINFELD
int einFelderhalten(int wert)
{
    std::cout <<"Wert uebergebenes Feld des Array> "
              << wert << std::endl;;
}
#endif

int main(int argc, char **argv)
{
	int a[MAX] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};

	// * Uebergabe des ganezen Arrays
    reihenfolge(&a[0]);	// * richtig: Adresse des ersten Elements wird uebergeben
	//reihenfolge(&a);		// * falsch aber kompiliert mir Warnung. Der Name eines Arrays ist auch gleichzeitig eine Referenz auf das erste Element des Arrays.
	umdrehen(a);			// * richtig: der Name eines Arrays ist gleichzeitig eine Referenz auf das erste Element des Arrays
    //umdrehen(a[0]);		// * falsch: hier wird versucht nicht ein Array sondern ein Element zu uebergeben.

    // * Uebergabe eines Feldes des Arrays
    #ifdef EINFELD
    // * Uebergabe eines Feldes
    //einFelderhalten(a[3]);
    //einFelderhalten(*(a+3));
    #endif

return 0;
}
