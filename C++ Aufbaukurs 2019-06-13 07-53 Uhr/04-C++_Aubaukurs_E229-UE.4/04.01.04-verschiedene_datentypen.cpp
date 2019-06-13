// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.01.04 der C++ Programmierung
// * Template fuer Funktion die verschiedene
// * Datatypen uebergeben bekommen

#include <iostream>

// * Template
template<typename type_1, typename type_2, typename type_3> // * Mehrere Datatypen sind Uebertragbar
type_3 rechnen(type_1 x, type_2 y, type_3 z)
{
    type_3 result;

    result = ((x*x)-y)/z;
    return result;
}


int main()
{
    int a = 4;
    float b = 5;
    double c = 2.492, r;

    r = rechnen(c, b, a);

    std::cout << "\n"<< r << "\n" << std::endl;

    return 0;
}
