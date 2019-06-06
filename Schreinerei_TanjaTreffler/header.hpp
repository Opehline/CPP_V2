// Tanja Treffler
// Projekt
//
// Betreibsablauf in der Schreinerei


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

#undef Materialnachkauf_V1

/* Weitere Funktionen deklarieren*/
int  bestellungsaufnahme();               // Komplette Aufnahme der Kundenbestellung
int kundenbegruessung();                  // R�ckgabe: Anzahl gew�nschter Tische
int  bestellungsverifikation(int tisch);  // Best�tigung und Pr�fung auf Machbarkeit
// 0 = False // 1 = True // 2 = Menge war zu hoch, mach nochmal
void startBetrieb();                      // Was noch in der Main �brig war
void bilanzausgabe(int* auftraege);   // Wie viel wurde verkauft?


#define PREISBERECHNUNG(t) (t) * preise["tisch"]





