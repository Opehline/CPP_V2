// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.06.01 der C++ Programmierung
// * Projekt einer Klasse erstellen


#include <iostream>
#include "Punkt.hpp"
#include "Haus.hpp"

int main(int argc, char **argv)
{
    Punkt p1;
    p1.setPunkt(5, 6, 9);

    std::cout << p1.getXKoordinate() << std::endl;
    std::cout << p1.getYKoordinate() << std::endl;
    std::cout << p1.getZKoordinate() << std::endl;

return 0;
}
