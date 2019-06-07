// Gisela Neira
// C++ Basics E228
// * Basisprogramm 01.07.02 der C/C++ Programmierung
// * Ausgabe eines Funktionsresultat C++

#include <iostream>
#include <cstdlib>

int quadrat(int a)
{
    return(a*a);
}

int main(int argc, char **argv)
{
    int g = atoi(argv[1]);
    float g = 8;
    std::cout << quadrat(g) << std::endl;

return 0;
}
