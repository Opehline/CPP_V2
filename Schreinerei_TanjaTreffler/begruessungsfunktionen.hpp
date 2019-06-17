// Tanja Treffler
//   Projekt für C++ Aufbaukurs
//   Schreinerei vereinfacht abbilden


#include <iostream> // std::cout
#include <stdio.h>  // printf()
#include <cstdlib>
#include <string>   // std::string
#include <typeinfo>
//#include <utility>  // std::pair, std::make_pair
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <map>            // std::map
#include <iterator>

#include "Lagerinitialisierung.hpp"

#ifndef begruessung_H
#define begruessung_H
class Begruessungsfunktionen{

/* Attribute */
private:
    Lagern myLagern;
    int n;     // Anzahl Testkunden


public:
    // Konstruktoren
    Begruessungsfunktionen();
    Begruessungsfunktionen(Lagern lager);
    // get-Set
    void setLager(Lagern lager);
    Lagern getLager();

/* Weitere Methoden */
public:
    void startBetrieb();                 // Beginne mit dem Betrieb
    int bestellungsaufnahme();           // Komplette Aufnahme der Bestellung
    int kundenbegruessung();             // Rückgabe: Anzahl gewünschter Tische
    int bestellungsverifikation(int tisch); // Bestätigung + Machbarkeitsprüfung
    // 0 = False // 1 = True // 2 = Menge war zu hoch, mach nochmal
    void bilanzausgabe(int* auftraege);  // Wie viel wurde jedem verkauft?

};
#endif // begruessung_H

#define PREISBERECHNUNG(t) (t) * getLager().getPreise()["tisch"]





