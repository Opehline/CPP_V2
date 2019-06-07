// Gisela Neira
// C++ Basics E228
// * Basisprogramm 03.04.04 der C/C++ Programmierung
// * ternaere-Operator: Ausgabe vorhersagen

#include <iostream>

using namespace std;

void wahr(int const i)
{ 
	std::cout << ( i ? 2 : 3 ) << std::endl; // * (Bedingung ? wahr : falsch)
}

int main()
{ 
	// * Welche Ausgabe erhaelt jede Funktion?
	wahr(0);
    wahr(1);
    wahr(7); 

return 0;
}
