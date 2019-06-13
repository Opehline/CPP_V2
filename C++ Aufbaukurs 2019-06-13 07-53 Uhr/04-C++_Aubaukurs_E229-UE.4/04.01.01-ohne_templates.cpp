// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.01.01 der C++ Programmierung
// * Programm ohne Template

#include <iostream>
#include <array>


// * Es soll das Resultat erreichnet werden, mit nur int-Werten.
float rechnen(double x, float y, float z)
{
    float result;

    result = ((x*x)-y)/z;
    return result;
}

// * Bei Variablentypaenderung:
// * Fuer jeden neuen Fall ist es notwendig neu die Funktion zu erstellen.

int main()
{
    double a = 4.675;
	float b = 5;
	float c = 2;
	double r;

    r = rechnen(a, b, c);

    std::cout << "\n"<< r << "\n" << std::endl;

    return 0;
}
