// Gisela Neira
// C++ Basics E228
// * Programm 04.04.02 der C/C++ Programmierung
// * Multidimensionale Arrays
// * MD-Arrays sind in Wirklichkeit 1D-Arrays plus Terminatorzeichen.

#include "stdio.h"

int main()
{
    char arr[5][7][6];
    char (*p)[5][7][6] = &arr;
 
    /* Hint: &arr - is of type const pointer to an array of
       5 two dimensional arrays of size [7][6] */
 
    printf("%d\n", (&arr + 1) - &arr);
    printf("%d\n", (char *)(&arr + 1) - (char *)&arr);
    printf("%d\n", (unsigned)(arr + 1) - (unsigned)arr);
    printf("%d\n", (unsigned)(p + 1) - (unsigned)p);
 
    return 0;
}
