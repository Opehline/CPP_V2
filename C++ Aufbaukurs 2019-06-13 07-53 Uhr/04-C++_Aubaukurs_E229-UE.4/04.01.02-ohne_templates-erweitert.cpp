// Gisela Neira
// C++ Aufbaukurs E229
// * Templates 04.01.02 der C++ Programmierung
// * Programm ohne Template erweitert


#include <iostream>


// * Es soll das Resultat erreichnet werden, mit int-Werten.
int rechnen_int(int a, int b, int c)
{
    int result;

    result = ((a*a)-b)/c;
    return result;
}

// * Es soll das Resultat erreichnet werden, mit float-Werten.
float rechnen_float(float a, float b, float c)
{
    float result;

    result = ((a*a)-b)/c;
    return result;
}

// * Es soll das Resultat erreichnet werden, mit double-Werten.
double rechnen_double(double a, double b, double c)
{
    double result;

    result = ((a*a)-b)/c;
    return result;
}


int main()
{
    int ai = 4, bi = 5, ci = 2, ri;
    float af = 3.2, bf = 5.8, cf = 2.1, rf;
    double ad = 3.228, bd = 2.1548, cd = 2.4121, rd;

    ri = rechnen_int(ai, bi, ci);
    rf = rechnen_float(af, bf, cf);
    rd = rechnen_double(ad, bd, cd);

    std::cout << "\n"<< ri << "\n" << std::endl;
    std::cout << "\n"<< rf << "\n" << std::endl;
    std::cout << "\n"<< rd << "\n" << std::endl;
 
    return 0;
}
