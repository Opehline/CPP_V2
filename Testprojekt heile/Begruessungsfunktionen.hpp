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

#include "Tisch.hpp"
#include "Lagerinitialisierung.hpp"
#include "Ausnahmefallbehandlung.hpp"

// Präprozessorkonstanten
#define Testkunden 5 // Wie viele Kunden werden bedient?

#define AUSNAHME_NaN     1
#define AUSNAHME_ZuKlein 2
#define AUSNAHME_Null    3

// Makro noch sinnvoll?
#define PREISBERECHNUNG(t) (t) * getLager().getPreise()["tisch"]

#ifndef begruessung_H
#define begruessung_H
class Begruessungsfunktionen{

/* Attribute */
private:
    Lagern myLagern;
    int tische;
    int tische_machbar;
    std::string bestellbestaetigung;
    int kaufabschluss;
    // Testbetrieb mit n Kunden
    int auftragsbuch[Testkunden];
    Tisch tisch;


public:
    int i; // Schleifenparameter
    // Attribut für Ausnahmefallbehandlung
    Ausnahmefallbehandlung ausnahmen;
    // Konstruktoren
    Begruessungsfunktionen();
    Begruessungsfunktionen(Lagern lager);
    // get-Set
    void setLager(Lagern lager);
    Lagern getLager();
    Tisch getTisch();

/* Weitere Methoden */
public:
    void startBetrieb();               // Beginne mit dem Betrieb
    void bestellungsaufnahme();        // Komplette Aufnahme der Bestellung
    void kundenbegruessung();          // Erste Begruessung, Abfrage
    int bestellungsverifikation();     // Bestätigung + Machbarkeitsprüfung
    // 0 = False // 1 = True // 2 = Menge war zu hoch, mach nochmal
    void bilanzausgabe(int* auftraege);// Wie viel wurde jedem verkauft?
    void gueltigerBereich();           // Bestellmenge in logischem Bereich? >0

};
#endif // begruessung_H







