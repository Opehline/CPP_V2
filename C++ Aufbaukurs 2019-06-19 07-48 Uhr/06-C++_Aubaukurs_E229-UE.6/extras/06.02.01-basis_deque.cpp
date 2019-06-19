// Gisela Neira
// C++ Aufbaukurs E229
// * Programm 07.02.01 der C++ Programmierung
//   Basisaspekte eines Deques

#include <iostream>
#include <deque>

using namespace std;


int main()
{

    // * Es wird ein leeres Deque initialisiert, also ohne Griessee und Initialwerten:
    std::deque<int>mein_deque;
    // * Ein Wert wird im Deque am Anfang eingetragen:
    mein_deque.push_front(698);
    // * Der erste neue Wert wird auf Platz eins des Deques gelegt:
    std::cout << mein_deque[0] << std::endl;
    // * Alternativ auch moeglich
    std::cout << mein_deque.at(0) << std::endl;
	// * Zugriff ausserhalb des Bereichs
	mein_deque.at(6);
return 0;
}
