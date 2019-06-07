// Tanja Treffler
//   Projekt für C++ Basiskurs
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

/* Funktionen deklarieren*/
int bestellungsaufnahme();              // Komplette Aufnahme der Bestellung
int kundenbegruessung();                // Rückgabe: Anzahl gewünschter Tische
int bestellungsverifikation(int tisch); // Bestätigung und Machbarkeitsprüfung
// 0 = False // 1 = True // 2 = Menge war zu hoch, mach nochmal
void startBetrieb();                    // Beginne mit dem Betrieb
void bilanzausgabe(int* auftraege);     // Wie viel wurde jedem verkauft?

#define PREISBERECHNUNG(t) (t) * preise["tisch"]





