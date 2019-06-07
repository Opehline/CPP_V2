// Gisela Neira
// C++ Basics E228
// * Programm 04.03.02 der C/C++ Programmierung
// * Array: Rechnen mit Indices eines Arrays

#include <iostream>

#define MAX 10

void reihenfolge(int(* a))
{
    int i=0;

    std::cout << "Ausgabe des a-Arrays in richtiger Reihenfolge: " << std::endl;

    for(i=0; i<=9; i++)
    {
		std::cout << "a["<< i << "]. " << a[i] << std::endl;
    }
}

void umdrehen(int *a)
{
    int i=0, c=0;
    int b[MAX];

    std::cout << "Umdrehen des a-Arrays:\n" << std::endl;

    for(i=9, c=0; i>=0, c<=9; i--, c++)
    {
    	b[c] = a[i];
    }

    for(i=0, c=0; i<=9, c<=9; i++, c++)
    {
    	a[c] = b[i];
		std::cout  << "a["<< c << "]. " << a[c] << std::endl;
    }
   /*
   for(i=0; i<=9; i++)
    {
    	a[i] = b[i];
		std::cout  << "a["<< i << "]. " << a[i] << std::endl;
    }
    */
}


int main(int argc, char **argv)
{
    int a[MAX] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};

    reihenfolge(a);
    umdrehen(a);

return 0;
}
