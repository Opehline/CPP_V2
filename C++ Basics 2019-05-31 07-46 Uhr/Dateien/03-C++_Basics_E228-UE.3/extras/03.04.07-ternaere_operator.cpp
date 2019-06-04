// Gisela Neira
// C++ Basics E228
// * Programm 03.04.07 der C/C++ Programmierung
// * ternaere-Operator: std::string Funktion
// * zur Rueckgabe eines Textes


#include <iostream>
#include <string>

int main()
{
    int a=5, b=3, c=30;

    // * Alle Terme des ?-Operators muessen der selben Art sein
	// * Hier sind es int-Terme
    std::cout << (c%a==0?(c%b==0?c/(a*b):0):0) << std::endl;
	// * Hier sind es std::string-Terme
    std::cout << (c%a==0?(c%b==0?"Teilbar":"Nicht teilbar"):"Nicht teilbar") << std::endl;

return 0;
}
