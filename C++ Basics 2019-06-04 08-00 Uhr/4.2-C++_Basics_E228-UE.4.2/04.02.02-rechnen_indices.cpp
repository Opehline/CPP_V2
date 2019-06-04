// Gisela Neira
// C++ Basics E228
// * Progamm 04.02.02 der C/C++ Programmierung
// * Array: Rechnen mit Indices eines Arrays

#include <iostream>

#define MAX 20


void findices(int index, int arr[])
{
    arr[3*index+4] = arr[index+2]-3;  // * = 11
    std::cout << "Wert von Element (3*" << index << "+4), also a["
              << 3*index+4 << "]: " << arr[index+2]-3 << std::endl;
}

int fsumme(int *daten)
{
    int summe=0, zaehler=0;

    for(zaehler=0; zaehler<MAX; zaehler++)
    {
	    summe += daten[zaehler];
    }
    return summe;
}
// ARRAYS WERDEN IMMER ALS REFERENZ ÜBERGEBEN
int main(int argc, char **argv)
{
    int a[MAX] = {5, 6, 4, 6, 22, 14};
    int indiz = 3;

    std::cout << "Summe vor rechnen mit Indices: " << fsumme(a) << std::endl;
    findices(indiz, a);
    std::cout << "Summe nach rechnen mit Indices: " << fsumme(a) << std::endl;

return 0;
}
