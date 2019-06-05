#include "05.07.03-header.h"

void add5()
{
    int a = 10;
    static int staticVariable = 10;

    a += 5;
    staticVariable += 5;

    printf("normale Variable = %d ---- statische Variable = %d\n",
           a, staticVariable);
}
