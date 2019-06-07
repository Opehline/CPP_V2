// Gisela Neira
// C++ Basics E228
// * Programm 03.04.07 der C/C++ Programmierung
// * ternaere-Operator: std::string Funktion
// * zur Rueckgabe eines Textes

// HA 3 - Umschreiben zu if-Struktur
#include <iostream>
#include <string>

int main()
{
    int a=5, b=3, c=30;
    int wert = 0;

	if (c%a == 0){
        if(c%b==0){
            wert = c/(a*b);
        } else{
            wert = 0;
        }
	}else {
	    wert = 0;
	}
	std::cout << wert << std::endl;

	if(c%a == 0){
        if(c%b == 0){
            std::cout << "Teilbar" << std::endl;
        }else{
            std::cout << "Nicht teilbar" << std::endl;
        }
	}else{
	    std::cout  << "Nicht teilbar" << std::endl;
	}
	/*
    std::cout << (c%a==0?(c%b==0?c/(a*b):0):0) << std::endl;
    std::cout << (c%a==0?(c%b==0?"Teilbar":"Nicht teilbar"):"Nicht teilbar") << std::endl;
    */

return 0;
}
