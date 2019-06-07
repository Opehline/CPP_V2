#include "05.07.03-header.h"

void add5()
{
    int a = 10;
    static int staticLocalVar = 10;

    a += 5;
    staticLocalVar += 5;

    printf("normale Variable = %d ---- statische Variable = %d\n",
           a, staticLocalVar);
}
