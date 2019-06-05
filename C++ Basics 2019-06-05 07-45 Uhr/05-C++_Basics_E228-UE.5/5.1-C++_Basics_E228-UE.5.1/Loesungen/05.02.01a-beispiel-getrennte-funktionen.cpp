// Gisela Neira
// C++ Basics E228
// * Funktionen 05.02.01 der C/C++ Programmierung
// * Loesungsvorschlag

#include <iostream>


float ergebnis=0;

void summe(float a, float b)
{
    ergebnis=a+b;
    std::cout << "Summe von a und b: " <<  ergebnis << std::endl;
}

void multiplikation(float a, float b)
{
    ergebnis=a*b;
    std::cout << "Multiplikation von a und b: " <<  ergebnis << std::endl;
}

void division(float a, float b)
{
    ergebnis=a/b;
    std::cout << "Division von a und b: " <<  ergebnis << std::endl;
}


int main(int argc, char **argv)
{
    float x=25, y=5, sum=0;

    summe(x, y);
    multiplikation(x, y);
    division(x, y);

return 0;
}
