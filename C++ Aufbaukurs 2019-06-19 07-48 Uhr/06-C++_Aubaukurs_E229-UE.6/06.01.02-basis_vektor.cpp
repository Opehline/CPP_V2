// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.01.02 der C++ Programmierung
// * Basisaspekte eines Vektors

#include <iostream>
#include <vector>

using namespace std;


int main()
{

    // * Es wird ein leeres Vector initialisiert, also ohne Groesse und Initialwerten:
    std::vector<int>mein_vector;
    // * Ein Wert wird im Vector eingetragen:
    mein_vector.push_back(698);
    // * Der erste neue Wert wird auf Platz eins des Vectors gelegt:
    std::cout << mein_vector[0] << std::endl;
    // * Alternativ auch moeglich
    std::cout << mein_vector.at(0) << std::endl;
	// * Fehlermeldung "out-of-range" bei Grenzueberschreitung (Vergleich mit []-Operator):
	//mein_vector.at(5);
	//mein_vector[5];
	//std::cout << mein_vector[5] << std::endl;
	std::cout << "Hallo" << std::endl;
return 0;
}
