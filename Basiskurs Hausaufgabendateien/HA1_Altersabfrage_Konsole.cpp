// Tanja TTreffler
// Hausaufgabe von Montag
// Altersabfrage

// Aufrug in der Konsole: ....exe a1 a2

// Schritt 1: Ein Alter abfragen
// Schritt 2: 2 Alterseingaben abfragen
// Schritt 3: Durchschnitt berechnen

#include <iostream>

int main(int argc, char **argv){

    // Zwei Altersangaben müssen schon mit Programmaufruf eingegeben werden

    // Input als integer interpretieren
    // argv[0] = Programmname -> Umwandeln würde nicht klappen
    int a1 = atoi(argv[1]); // a(char) to int
    int a2 = atoi(argv[2]); // a(char) to int

    std::cout << "Ihr seid schon " << a1 << " und " << a2 << " Jahre alt? Wow!" << std::endl;
    float durchschnitt = (a1 + a2) / 2.0;
    std::cout << "Der Durchnitt ist dann " << durchschnitt << "." << std::endl;


    return 0;

}
