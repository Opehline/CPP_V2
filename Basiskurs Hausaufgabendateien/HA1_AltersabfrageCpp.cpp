// Tanja TTreffler
// Hausaufgabe von Montag
// Altersabfrage

// Schritt 1: Ein Alter abfragen
// Schritt 2: 2 Alterseingaben abfragen
// Schritt 3: Durchschnitt berechnen

#include <iostream>

int main(){
    int a1, a2;
    std::cout << "Wie alt ist die erste Person? " << std::endl;
    std::cin >> a1; // Tastatureingabe in der aufploppenden Konsole
    std::cin.ignore(10000,'\n');
    std::cout << "Wie alt ist die zweite Person? " << std::endl;
    std::cin >> a2;
    std::cin.clear(); // löscht den Speicher cin
    std::cout << "Ihr seid schon " << a1 << " und " << a2 << " Jahre alt? Wow!" << std::endl;
    int suma1a2 = a1 + a2;
    float durchschnitt = suma1a2 / 2.0;
    std::cout << "Der Durchnitt ist dann " << durchschnitt << "." << std::endl;


    return 0;

}
