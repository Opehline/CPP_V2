// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 01.06.01 der C++ Programmierung
// * Projekt einer Klasse erstellen

#include <iostream>
#include "Punkt.hpp"

// * Auslegen des Konstruktors
Punkt::Punkt()
{
	// * Initialisierung der Variables im Konstruktor
	// * vornehmen.
	x=0;
	y=0;
	z=0;
	std::cout << "Es wird ein 3D Punkt erstellt..."
			  << std::endl;
}

Punkt::~Punkt()
{
    ;
}

// * Auslegen von Methoden:
// * set-Methode (Funktion)
void Punkt::setPunkt(int _x, int _y, int _z)
{
    x = _x;
    y = _y;
    z = _z;
    std::cout << "X-Koordinate: > " << x
			  << "\nY-Koordinate: > " << y
			  << "\nZ-Koordinate: > " << z
			  << std::endl;
}

// * get-Methode (Funktion)
int Punkt::getXKoordinate()
{
    return x;
}
int Punkt::getYKoordinate()
{
    return y;
}
int Punkt::getZKoordinate()
{
    return z;
}
