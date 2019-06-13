// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 04.01.03 der C++ Programmierung
// * Template fuer Funktion die einen Datatyp
// * uebergeben bekommen


#include <iostream>

// * Template
// * Format: template <typname name>
// * Funktion: ueberall wo 'type' steht soll durch zugehoerigen Datatyp ersetzt werden.
template<typename type> 				// * Nur ein Datentyp ist aebertragbar
type rechnen(type x, float y, type z)
{
    type result;

    result = ((x*x)-y)/z;
    return result;
}


// * Fuer jeden neuen Fall ist es nicht mehr
// * notwendig neu die Funktion zu erstellen.
int main()
{
    // * Diesen Teil ein- und auskommentieren
    //int a = 4, b = 5, c = 2, r;
    //float a = 4.5, b = 5.4, c = 2.2, r;
    //double a = 4.475, b = 5.2364, c = 2.492, r;

    r = rechnen(a, b, c);

    std::cout << "\n"<< r << "\n" << std::endl;

    return 0;
}
